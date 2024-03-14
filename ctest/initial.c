#include "game.h"






void loadFile() {
	Sleep(1000);
	printf("불러오기 성공");
	Sleep(1000);
	system("cls");
	game();
}

void menu(char select) {
	switch (select) {
	case '1': // 새게임
		game(); break;
	case '2': // 이어하기
		loadFile(); break;
	case '3': // 설정
		printf("설정은 없다"); break;
	case '4': // 만든이
		printf("만든이"); break;
	case '5': // 종료
		return;
	}
}

char startScreen() {
	color(4); printf("T "); color(1); printf("E "); color(6); printf("X ");
	color(7); printf("T "); color(2); printf("R "); color(9); printf("P ");
	color(4); printf("G \n"); color(7);

	/*Beep(330, 500); Beep(290, 500); Beep(260, 500); Beep(290, 500);
	Beep(330, 500); Beep(330, 500); Beep(330, 500);
	Beep(290, 500); Beep(290, 500); Beep(290, 500);
	Beep(330, 500); Beep(330, 500); Beep(330, 500);
	Beep(330, 500); Beep(290, 500); Beep(260, 500); Beep(290, 500);
	Beep(330, 500); Beep(330, 500); Beep(330, 500);
	Beep(290, 500); Beep(290, 500); Beep(330, 500); Beep(290, 500); Beep(260, 500);*/

	printf("게임을 시작해볼까?\n");
	printf("1. 새 게임\n");
	printf("2. 이어하기\n");
	printf("3. 게임설정\n");
	printf("4. 만든이\n");
	printf("5. 게임 종료\n");
	char select;
	select = getch();
	return select;

}

void color(int n) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
}