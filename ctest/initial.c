#include "game.h"






void loadFile() {
	Sleep(1000);
	printf("�ҷ����� ����");
	Sleep(1000);
	system("cls");
	game();
}

void menu(char select) {
	switch (select) {
	case '1': // ������
		game(); break;
	case '2': // �̾��ϱ�
		loadFile(); break;
	case '3': // ����
		printf("������ ����"); break;
	case '4': // ������
		printf("������"); break;
	case '5': // ����
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

	printf("������ �����غ���?\n");
	printf("1. �� ����\n");
	printf("2. �̾��ϱ�\n");
	printf("3. ���Ӽ���\n");
	printf("4. ������\n");
	printf("5. ���� ����\n");
	char select;
	select = getch();
	return select;

}

void color(int n) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
}