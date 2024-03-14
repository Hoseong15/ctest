#include "game.h"

#define xSize 17
#define ySize 10
#define X 8
#define headY 8
#define bodyY 9
#define building 10


void fight(int *age, int *level, char *job,char*life,char*look); // 몬스터 조우
void gameStory(void**); // 내용
void make_building(char(*board)[xSize]);
void gotoXY(int x, int y);
static void moving(char(*board)[xSize]);
void screenDraw(char(*board)[xSize]);
static bool encounter(int *plevel,char* plife);
char* enemyList(int ex_value, int * penemy_level);

// 전역변수
short end_game = 1;


char* enemyList(int ex_value, int* penemy_level) {
	static char enemy[5][4][100] = {
		// level 1 적
		{"똥개","바퀴벌레2마리","새벽3시 모기2마리","신천지 전도아줌마"},
		// level 2 적
		{"김민주","말많은 교장쌤","조별과제 안하는 조원","밥 먹을때 빌붙는 선배"},
		// level 3 적
		{"담배사달라는 중학생","신호등 초록불에 안가는 앞차","퇴근 할 사람해하고 남아서 일하는 부장놈 ","종우옆에 자고있는 종권"},
		// level 4 적
		{"동네 양아치","술먹고 시비거는 사람","인호성(김민수 시점)","층간소음 문제로 찾아오는 사람"},
		// level 5 적
		{"월급 안주는 사장새끼","입영통지서","지나가면서 한마디하는 사단장","저승사자"}
	};
	int r = rand() % 4; // 각 레벨당 적에 대한 인덱스 랜덤
	int r2 = ex_value / 10; // 현재레벨
	int r3 = ex_value % 10; // 현재 경험치 가장 앞자리
	if (r3 == 9 && r2 <5 ) r2 += 1; // 현재 경험치가 9라면 레벨을 1올린다.
	*penemy_level = rand() % r2; // 현재 레벨 이하의 적 랜덤설정
	return enemy[*penemy_level-1][r];

}


// 적과의 싸움
void fight(int* age, int* level, char* job, char* life, char* look) {
	static float experience = 0.0;
	int enemy_level;
	char* enemy = enemyList((*level + experience) * 10, &enemy_level);
	gotoXY(0, 0);

	printf("%s %s 인생을 살고 있는 나!! 인생의 시련을 마주한다.\n\n",life,job);

	Sleep(500); color(4); printf("시련!");
	Sleep(500); color(6); printf("출현!\n\n"); 
	color(4);
	printf("\n\n %s \n\n",enemy);
	color(7);
	
	printf("1. 공격   2.도망");
	char select = getch();
	if (select == '2') {
		printf("도망을 선택하였습니다.");
		int temp = rand() % 2;
		if (temp == 1) {
			printf("시련을 벗어나는데 성공하였습니다");
			Sleep(2000);
			system("cls");
			return;
		}
		printf("도망 실패! 적이 강해집니다.");
		enemy_level += 2;
		Sleep(1000);
	}

	int enemy_hp = enemy_level * 100;
	// enemyList 함수로부터 적과 적의 인덱스(my_enemy)를 받아 오도록 수정하여
	// 인덱스 *100
	int my_attack = *level * 30;  // 나의 현재 레벨 *30
	int turn = 1;

	for (; turn <= 7; turn++) {
		enemy_hp -= my_attack;
		if (enemy_hp < 0) enemy_hp = 0;
		printf("%d 피해를줬습니다\n", my_attack);
		printf("적 HP: %d\n", enemy_hp);
		if (enemy_hp == 0) break;
	}
	if (turn == 0) {
		printf("시련을 이겨내지 못했습니다.....다음 인생 기약해보세요^--^\n");
		end_game = 0;
		Sleep(2000);
		system("cls");
		return;
	}
	experience += enemy_level * 2.5 * 0.1;
	printf("얻은 경험치 : %.2f\n", enemy_level * 2.5 * 0.1);
	if (experience >= 1.0 && *level!=5) {
		*level += 1;
		experience -= 1.0;
		printf("레벨업! 현재레벨: %dLV -> %dLV \n", *level-1,*level);
	}

}



void gameStory(void** avata) {
	int age = *((int*)avata[0]), level = *((int*)avata[2]);
	char job[50], life[20], look[50];
	strcpy(job, (char*)avata[1]);
	strcpy(life, (char*)avata[3]);
	strcpy(look, (char*)avata[4]);
	char board[ySize][xSize] = { 0, };
	board[headY][X] = 1;
	board[bodyY][X] = 2;

	make_building(board);

	while (1) {
		gotoXY(0, 0);
		board[headY][X] = 1;
		board[bodyY][X] = 2;
		screenDraw(board); // 화면 그리기
		moving(board);
		if (encounter(&level,life) == true) {
			fight(&age,&level, life,job,look);
		}
		if (!end_game)return;
	}
}

// 적과 마주치는지 안 마주치는지에 대한 내용
bool encounter(int* plevel, char* plife) {
	int meet = rand() % 10;
	bool isMeet = false;
	if (meet == 5 || meet == 7) {
		isMeet = true;
		gotoXY(4, 12);
		printf("┌─────────────────────────────────┐\n");
		printf("    │ %s 인생의 시련을 만났습니다.│\n",plife);
		printf("    └─────────────────────────────────┘\n");
		Sleep(1000);
	}
	Sleep(500);
	system("cls");
	return isMeet;
}


void make_building(char (*board)[xSize] ) {
	for (int i = 1; i <= building; i++) {
		int posx = rand() % xSize;
		int posy = rand() % ySize;
		if (posx == X) {
			i--;
			continue;
		}
		board[posy][posx] = 6;
	}
}

void screenDraw(char (*board)[xSize]) {
	for (int i = 0; i < ySize; i++) {
		for (int k = 0; k < xSize; k++) {
			if (board[i][k] == 0)
				printf("  ");
			else if (board[i][k] == 6)
				printf("■");
			else if (board[i][k] == 1)
				printf("○");
			else if (board[i][k] == 2)
				printf("Δ");
		}
		printf("\n");
	}
}

void gotoXY(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

static void moving( char(*board)[xSize] ) {
	for (int i = ySize - 1; i > 0; i--) {
		for (int k = 0; k < xSize; k++) {
			board[i][k] = board[i - 1][k];
		}
	}
	memset(board[0], 0, sizeof(char) * xSize);
	int cnt = 0;
	for (int i = 0; i < ySize; i++) {
		for (int k = 0; k < xSize; k++) {
			if (board[i][k] == 6) cnt++;
		}
	}

	for (int i = 0; i < building-cnt; i++) {
		int posx = rand() % xSize;
		if (posx == X) {
			i--;
			continue;
		}
		board[0][posx] = 6;
	}
}
