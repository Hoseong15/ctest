#include "game.h"

#define xSize 17
#define ySize 10
#define X 8
#define headY 8
#define bodyY 9
#define building 10


void fight(int *age, int *level, char *job,char*life,char*look); // ���� ����
void gameStory(void**); // ����
void make_building(char(*board)[xSize]);
void gotoXY(int x, int y);
static void moving(char(*board)[xSize]);
void screenDraw(char(*board)[xSize]);
static bool encounter(int *plevel,char* plife);
char* enemyList(int ex_value, int * penemy_level);

// ��������
short end_game = 1;


char* enemyList(int ex_value, int* penemy_level) {
	static char enemy[5][4][100] = {
		// level 1 ��
		{"�˰�","��������2����","����3�� ���2����","��õ�� �������ܸ�"},
		// level 2 ��
		{"�����","������ �����","�������� ���ϴ� ����","�� ������ ���ٴ� ����"},
		// level 3 ��
		{"����޶�� ���л�","��ȣ�� �ʷϺҿ� �Ȱ��� ����","��� �� ������ϰ� ���Ƽ� ���ϴ� ����� ","���쿷�� �ڰ��ִ� ����"},
		// level 4 ��
		{"���� ���ġ","���԰� �ú�Ŵ� ���","��ȣ��(��μ� ����)","�������� ������ ã�ƿ��� ���"},
		// level 5 ��
		{"���� ���ִ� �������","�Կ�������","�������鼭 �Ѹ����ϴ� �����","���»���"}
	};
	int r = rand() % 4; // �� ������ ���� ���� �ε��� ����
	int r2 = ex_value / 10; // ���緹��
	int r3 = ex_value % 10; // ���� ����ġ ���� ���ڸ�
	if (r3 == 9 && r2 <5 ) r2 += 1; // ���� ����ġ�� 9��� ������ 1�ø���.
	*penemy_level = rand() % r2; // ���� ���� ������ �� ��������
	return enemy[*penemy_level-1][r];

}


// ������ �ο�
void fight(int* age, int* level, char* job, char* life, char* look) {
	static float experience = 0.0;
	int enemy_level;
	char* enemy = enemyList((*level + experience) * 10, &enemy_level);
	gotoXY(0, 0);

	printf("%s %s �λ��� ��� �ִ� ��!! �λ��� �÷��� �����Ѵ�.\n\n",life,job);

	Sleep(500); color(4); printf("�÷�!");
	Sleep(500); color(6); printf("����!\n\n"); 
	color(4);
	printf("\n\n %s \n\n",enemy);
	color(7);
	
	printf("1. ����   2.����");
	char select = getch();
	if (select == '2') {
		printf("������ �����Ͽ����ϴ�.");
		int temp = rand() % 2;
		if (temp == 1) {
			printf("�÷��� ����µ� �����Ͽ����ϴ�");
			Sleep(2000);
			system("cls");
			return;
		}
		printf("���� ����! ���� �������ϴ�.");
		enemy_level += 2;
		Sleep(1000);
	}

	int enemy_hp = enemy_level * 100;
	// enemyList �Լ��κ��� ���� ���� �ε���(my_enemy)�� �޾� ������ �����Ͽ�
	// �ε��� *100
	int my_attack = *level * 30;  // ���� ���� ���� *30
	int turn = 1;

	for (; turn <= 7; turn++) {
		enemy_hp -= my_attack;
		if (enemy_hp < 0) enemy_hp = 0;
		printf("%d ���ظ�����ϴ�\n", my_attack);
		printf("�� HP: %d\n", enemy_hp);
		if (enemy_hp == 0) break;
	}
	if (turn == 0) {
		printf("�÷��� �̰ܳ��� ���߽��ϴ�.....���� �λ� ����غ�����^--^\n");
		end_game = 0;
		Sleep(2000);
		system("cls");
		return;
	}
	experience += enemy_level * 2.5 * 0.1;
	printf("���� ����ġ : %.2f\n", enemy_level * 2.5 * 0.1);
	if (experience >= 1.0 && *level!=5) {
		*level += 1;
		experience -= 1.0;
		printf("������! ���緹��: %dLV -> %dLV \n", *level-1,*level);
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
		screenDraw(board); // ȭ�� �׸���
		moving(board);
		if (encounter(&level,life) == true) {
			fight(&age,&level, life,job,look);
		}
		if (!end_game)return;
	}
}

// ���� ����ġ���� �� ����ġ������ ���� ����
bool encounter(int* plevel, char* plife) {
	int meet = rand() % 10;
	bool isMeet = false;
	if (meet == 5 || meet == 7) {
		isMeet = true;
		gotoXY(4, 12);
		printf("����������������������������������������������������������������������\n");
		printf("    �� %s �λ��� �÷��� �������ϴ�.��\n",plife);
		printf("    ����������������������������������������������������������������������\n");
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
				printf("��");
			else if (board[i][k] == 1)
				printf("��");
			else if (board[i][k] == 2)
				printf("��");
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
