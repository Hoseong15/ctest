#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//   Sleep(1000);

int init(); 
void draw(); //�׸� �׸��� �Լ�
int game();  //���� �����Լ�
void result(int select); //��� ����Լ�

void main() {
	int gamer = init();
	int select = 0;
	printf("�߹��� ���� �Լ�ȣ��");
	select = game(gamer);
	result(select);
}
int init() {
	int cnt = 0, people = 0;
	do {
		printf("�����ο� ���� : ");
		scanf_s("%d", &people);
		if (people > 7) printf("�ִ� ���� �ο����� 7�� �Դϴ�.");
	} while (people > 7);
	cnt = people / 2 + 2;
	return cnt;
}
void draw(int gamer) {

	for (int i = 1; i <= gamer; i++) {
		printf("����������������");
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("��      ��");
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("�� % d  ��",i);
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("��      ��");
		if (i != gamer) printf("     ");
	}
	printf("\n");
	for (int i = 1; i <= gamer; i++) {
		printf("����������������");
		if (i != gamer) printf("     ");
	}
	printf("\n");




}
int game(int gamer) {
	int select;
	printf("��~�� �� ���� �� �Ա� \n");
	printf("�������� ���� �� ���ߴ� �� ����\n\n");
	printf("�׸��� �Լ� ȣ����");
	for (int i = 1; i <= 10; i++) { Sleep(500); printf("."); }
	printf("'\n");
	draw(gamer);
	printf("\n���� �������� ��!!!! : ");
	scanf_s("%d", &select);
	return select;
}
void result(int select) {
	int com = rand() % 4 + 1;
	if (select == com) {
		printf("����!! \n\n\n");
	}
	else {
		printf("����� ����� ��� ���� �Ǿ����ϴ�.\n\n\n");
	}
}
