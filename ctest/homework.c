#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//   Sleep(1000);

int init(); 
void draw(); //그림 그리는 함수
int game();  //게임 시작함수
void result(int select); //결과 출력함수

void main() {
	int gamer = init();
	int select = 0;
	printf("야바위 게임 함수호출");
	select = game(gamer);
	result(select);
}
int init() {
	int cnt = 0, people = 0;
	do {
		printf("참가인원 설정 : ");
		scanf_s("%d", &people);
		if (people > 7) printf("최대 참가 인원수는 7명 입니다.");
	} while (people > 7);
	cnt = people / 2 + 2;
	return cnt;
}
void draw(int gamer) {

	for (int i = 1; i <= gamer; i++) {
		printf("┌──────┐");
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("│      │");
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("│ % d  │",i);
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("│      │");
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("└──────┘");
		if (i != gamer) printf("     ");
	}
	printf("\n");




}
int game(int gamer) {
	int select;
	printf("자~아 돈 놓고 돈 먹기 \n");
	printf("지나가는 개도 다 맞추는 그 게임\n\n");
	printf("그리기 함수 호출중");
	for (int i = 1; i <= 10; i++) { Sleep(500); printf("."); }
	printf("'\n");
	draw(gamer);
	printf("\n왕을 찍으세요 왕!!!! : ");
	scanf_s("%d", &select);
	return select;
}
void result(int select) {
	int com = rand() % 4 + 1;
	if (select == com) {
		printf("정답!! \n\n\n");
	}
	else {
		printf("당신의 재산이 모두 몰수 되었습니다.\n\n\n");
	}
}
