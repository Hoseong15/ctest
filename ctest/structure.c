#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


enum menu { save=1, load, end };//������/

void main() {
	enum menu m;
	printf("1.����  2.�ҷ�����  3.���� : ");
	scanf("%d",(int*)&m);
	//m = save;
	switch (m)
	{
	case save:
		printf("����"); break;
	case load:
		printf("�ҷ�����"); break;
	case end:
		printf("����"); break;
	}
}


//union test{
//	int a;
//	char b;
//};
//void main() {
//	union test t1;
//	t1.a = 0x123;
//	if (t1.b == 35) {
//		printf("��Ʋ �ص��");
//	}
//	else {
//		printf("��ص��");
//	}
//	printf("%d %d\n", t1.a, t1.b);
//}


//union info { // ����ü(4byte)
//	int num;
//	char ch;
//	float fnum;
//};
//
//struct test{  // ����ü(12byte)
//	int num;
//	char ch;
//	float fnum;
//};
//
//
//void main() {
//	struct test t1;
//	t1.num = 20; t1.ch = 'a'; t1.fnum = 3.14;
//	printf("%d %c %2.f\n", t1.num, t1.ch, t1.fnum);
//
//	union info u1;
//	u1.num = 20; u1.ch = 97; u1.fnum = 3.14;
//	printf("%d %c %.2f", u1.num, u1.ch,u1.fnum);
//
//}



/*
	��ȭ�˻�
	1.	��ȭ����,�����⵵,����,�������
	2.	��ȭ�� 10�� ������ ����ϱ�
		��ȭ����ϴ� ����� �����Ҷ����� ���� �̷��ϰų� ó������ �ڵ��ۼ��Ҷ� �Է��س��ų�
	3.	�����Ҵ����� ���� �� �� �ְ��Ѵ�.
	4.	�Լ��� init ���� ���� ���� �� ������ ����
			   findAll ��ü ��ȭ ���
			   findByTitle ��ȭ�������� �˻��Ͽ� �ش� ��ȭ ���
*/
//typedef struct movie {
//	char title[50];
//	int year;
//	char director[20];
//	int rank;
//}movie;
//
//
//void init(movie  *m) {
//	strcpy(m[0].title, "�μ���");
//	m[0].year = 2010;
//	strcpy(m[0].director,"ũ�������� ���");
//	m[0].rank = 12;
//
//	strcpy(m[1].title, "����������1");
//	m[1].year = 2001;
//	strcpy(m[1].director, "�����轼");
//	m[1].rank = 12;
//
//	strcpy(m[2].title, "����������2");
//	m[2].year = 2002;
//	strcpy(m[2].director, "�����轼");
//	m[2].rank = 12;
//
//	strcpy(m[3].title, "����������3");
//	m[3].year = 2003;
//	strcpy(m[3].director, "�����轼");
//	m[3].rank = 12;
//
//	strcpy(m[4].title, "�ظ����� �������� ��");
//	m[4].year = 2001;
//	strcpy(m[4].director, "ũ���� �ݷ�����");
//	m[4].rank = 12;
//
//	strcpy(m[5].title, "�ظ����� ����� ��");
//	m[5].year = 2002;
//	strcpy(m[5].director, "ũ���� �ݷ�����");
//	m[5].rank = 12;
//
//	strcpy(m[6].title, "�ظ����Ϳ� ����ī���� �˼�");
//	m[6].year = 2004;
//	strcpy(m[6].director, "������ ��Ʒ�");
//	m[6].rank = 12;
//
//	strcpy(m[7].title, "�ظ����Ϳ� ������");
//	m[7].year = 2005;
//	strcpy(m[7].director, "����ũ ����");
//	m[7].rank = 12;
//
//	strcpy(m[8].title, "�ظ����Ϳ� �һ��� ����");
//	m[8].year = 2007;
//	strcpy(m[8].director, "���̺�� ������");
//	m[8].rank = 12;
//
//	strcpy(m[9].title, "�ظ����Ϳ� ȥ������");
//	m[9].year = 2009;
//	strcpy(m[9].director, "ũ���� �ݷ�����");
//	m[9].rank = 12;
//
//
//}
//
//void findAll(movie*m, int size) {
//	printf("��ȭ ���!\n");
//	for (int i = 0; i < size; i++) {
//		printf("���� : %s �����⵵ : %d ���� : %s ��� : %d��\n", m[i].title, m[i].year, m[i].director, m[i].rank);
//	}
//}
//
//void findByTitle(movie*m, int size , const char* name) {
//	for (int i = 0; i < size; i++) {
//		if (strcmp(m[i].title , name) == 0) {
//			printf("���� : %s �����⵵ : %d ���� : %s ��� : %d��\n", m[i].title, m[i].year, m[i].director, m[i].rank);
//			return;
//		}
//	}
//	printf("�ش� ��ȭ�� �����ϴ�.");
//}
//
//
//void main() {
//	movie* m = (movie*)malloc(sizeof(movie) * 10);
//	init(m);
//	findAll(m,5);
//	
//	char name[50];
//	printf("������ �˻��ϼ���\n");
//	gets(name);
//	findByTitle(m, 10, name);
//	free(m);
//	
//	
//}

//typedef struct member{
//	/*int age;
//	float weight;
//	int money;
//	double ch;*/
//
//	char name[20];
//	int age;
//	char blood[3];
//
//
//}Member;
//
//typedef struct appleClub{
//	int club_id;
//	char language[20];
//
//	//Member m;
//	Member *p;
//}Club;
//
//typedef struct cracker {
//	int price;
//	int calories;
//} crak;
//
//typedef struct item {
//	int num;
//	struct item* next; // ���� ��������ü
//} item;





//void main() {
	//int num;
	//item* start = NULL, *cur=NULL;

	//do {
	//	printf("�����Է� (0-����) : ");
	//	scanf("%d", &num);
	//	if (num != 0) {
	//		item* temp = (item*)malloc(sizeof(item));
	//		temp->num = num;
	//		temp->next = NULL;
	//		if (start == NULL) { start = temp; cur = temp; }
	//		else {
	//			cur->next = temp;
	//			cur = temp;
	//		}
	//	}
	//} while (num != 0);

	//// ���ݱ��� �Է� �� ���� ���
	//cur = start;
	//for (int i = 0; cur !=NULL; i++) {
	//	if (i % 5 == 0 && i != 0) puts("");
	//	printf("%d    ", cur->num);
	//	cur = cur->next;
	//}




	/*item *p = (item*)malloc( sizeof(item) * 5);
	p[0].num = 10;
	p[1].num = 20;
	p[2].num = 30;
	p[3].num = 40;
	p[4].num = 50;
	for (int i = 0; i < 5; i++) {
		printf("%d ", p[i].num);
	}*/

	/*crak c;
	printf("�ٻ���� ���ݰ� ������ �Է��ϼ���\n");
	scanf("%d %d", &c.price, &c.calories);
	printf("������� ���� %d��\n", c.price);
	printf("�ٻ���� Į�θ� : %dkcal\n", c.calories);*/


	//Club ����;
	//����.club_id = 1234;
	//strcpy(����.language, "C���");
	//
	//Member m1 = { "������",25,"FG" };

	//// ����ü ��������� ������
	//����.p=&m1;
	//printf("%d %d\n", ����.club_id, ����.p->age, ����.p->name);



	//Club ����;
	//����.club_id = 1234;
	//strcpy(����.language, "C���");

	//����.m.age = 30;
	//strcpy(����.m.name, "������");
	//strcpy(����.m.blood, "AB");
	//printf("%d  %s %d\n", ����.club_id, ����.language);
	//printf("%d %s %s\n", ����.m.age, ����.m.name, ����.m.blood);


	/*Member mem = { "�̼���",34,"o" };
	printf("%s %d %s\n", mem.name, mem.age, mem.blood);

	Member m2;
	strcpy(m2.name, "�踻��");
	m2.age = 45;
	m2.blood[0] = 'A'; m2.blood[1] = NULL;
	printf("%s %d %s\n", m2.name, m2.age, m2.blood);

	Member people[5];
	for (int i = 0; i < 5; i++) {
		printf("�̸� :");
		gets(people[i].name);
		printf("���� : ");
		scanf("%d", &people[i].age);
		getchar();
		printf("������ :");
		gets(people[i].blood);
	}*/
	

	//printf("%d\n", sizeof(mem));
	
	/*rintf("%d %.1fkg %d��\n", mem.age, mem.weight, mem.money);
	mem.age = 23;
	mem.weight = 72.6;
	mem.money = 20000;
	printf("%d %.1fkg %d��\n", mem.age, mem.weight, mem.money);*/
//}



/*
	����ü - ����� ���� ������ Ÿ��
	struct pos{
		int num;
		float funm;
		char name[20];

	}





*/