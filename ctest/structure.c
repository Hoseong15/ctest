#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


enum menu { save=1, load, end };//열거형/

void main() {
	enum menu m;
	printf("1.저장  2.불러오기  3.종료 : ");
	scanf("%d",(int*)&m);
	//m = save;
	switch (m)
	{
	case save:
		printf("저장"); break;
	case load:
		printf("불러오기"); break;
	case end:
		printf("종료"); break;
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
//		printf("리틀 앤디안");
//	}
//	else {
//		printf("빅앤디안");
//	}
//	printf("%d %d\n", t1.a, t1.b);
//}


//union info { // 공용체(4byte)
//	int num;
//	char ch;
//	float fnum;
//};
//
//struct test{  // 구조체(12byte)
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
	영화검색
	1.	영화제목,개봉년도,감독,관람등급
	2.	영화는 10개 정도만 등록하기
		영화등록하는 방법은 실행할때마다 직접 이력하거나 처음부터 코드작성할때 입력해놓거나
	3.	동적할당으로 저장 될 수 있게한다.
	4.	함수는 init 저장 공간 생성 및 데이터 저장
			   findAll 전체 영화 출력
			   findByTitle 영화제목으로 검색하여 해당 영화 출력
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
//	strcpy(m[0].title, "인셉션");
//	m[0].year = 2010;
//	strcpy(m[0].director,"크리스토퍼 놀란");
//	m[0].rank = 12;
//
//	strcpy(m[1].title, "반지의제왕1");
//	m[1].year = 2001;
//	strcpy(m[1].director, "피터잭슨");
//	m[1].rank = 12;
//
//	strcpy(m[2].title, "반지의제왕2");
//	m[2].year = 2002;
//	strcpy(m[2].director, "피터잭슨");
//	m[2].rank = 12;
//
//	strcpy(m[3].title, "반지의제왕3");
//	m[3].year = 2003;
//	strcpy(m[3].director, "피터잭슨");
//	m[3].rank = 12;
//
//	strcpy(m[4].title, "해리포터 마법사의 돌");
//	m[4].year = 2001;
//	strcpy(m[4].director, "크리스 콜럼버스");
//	m[4].rank = 12;
//
//	strcpy(m[5].title, "해리포터 비밀의 방");
//	m[5].year = 2002;
//	strcpy(m[5].director, "크리스 콜럼버스");
//	m[5].rank = 12;
//
//	strcpy(m[6].title, "해리포터와 아즈카반의 죄수");
//	m[6].year = 2004;
//	strcpy(m[6].director, "알폰소 쿠아론");
//	m[6].rank = 12;
//
//	strcpy(m[7].title, "해리포터와 불의잔");
//	m[7].year = 2005;
//	strcpy(m[7].director, "마이크 뉴얼");
//	m[7].rank = 12;
//
//	strcpy(m[8].title, "해리포터와 불사조 기사단");
//	m[8].year = 2007;
//	strcpy(m[8].director, "데이비드 예이즈");
//	m[8].rank = 12;
//
//	strcpy(m[9].title, "해리포터와 혼혈왕자");
//	m[9].year = 2009;
//	strcpy(m[9].director, "크리스 콜럼버스");
//	m[9].rank = 12;
//
//
//}
//
//void findAll(movie*m, int size) {
//	printf("영화 출력!\n");
//	for (int i = 0; i < size; i++) {
//		printf("제목 : %s 개봉년도 : %d 감독 : %s 등급 : %d세\n", m[i].title, m[i].year, m[i].director, m[i].rank);
//	}
//}
//
//void findByTitle(movie*m, int size , const char* name) {
//	for (int i = 0; i < size; i++) {
//		if (strcmp(m[i].title , name) == 0) {
//			printf("제목 : %s 개봉년도 : %d 감독 : %s 등급 : %d세\n", m[i].title, m[i].year, m[i].director, m[i].rank);
//			return;
//		}
//	}
//	printf("해당 영화는 없습니다.");
//}
//
//
//void main() {
//	movie* m = (movie*)malloc(sizeof(movie) * 10);
//	init(m);
//	findAll(m,5);
//	
//	char name[50];
//	printf("제목을 검색하세요\n");
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
//	struct item* next; // 내부 참조구조체
//} item;





//void main() {
	//int num;
	//item* start = NULL, *cur=NULL;

	//do {
	//	printf("정수입력 (0-종료) : ");
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

	//// 지금까지 입력 한 정수 출력
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
	printf("바사삭의 가격과 열량을 입력하세요\n");
	scanf("%d %d", &c.price, &c.calories);
	printf("버사삭의 가격 %d원\n", c.price);
	printf("바사삭의 칼로리 : %dkcal\n", c.calories);*/


	//Club 종우;
	//종우.club_id = 1234;
	//strcpy(종우.language, "C언어");
	//
	//Member m1 = { "서종우",25,"FG" };

	//// 구조체 사용했을때 포인터
	//종우.p=&m1;
	//printf("%d %d\n", 종우.club_id, 종우.p->age, 종우.p->name);



	//Club 종우;
	//종우.club_id = 1234;
	//strcpy(종우.language, "C언어");

	//종우.m.age = 30;
	//strcpy(종우.m.name, "서종우");
	//strcpy(종우.m.blood, "AB");
	//printf("%d  %s %d\n", 종우.club_id, 종우.language);
	//printf("%d %s %s\n", 종우.m.age, 종우.m.name, 종우.m.blood);


	/*Member mem = { "이순신",34,"o" };
	printf("%s %d %s\n", mem.name, mem.age, mem.blood);

	Member m2;
	strcpy(m2.name, "김말순");
	m2.age = 45;
	m2.blood[0] = 'A'; m2.blood[1] = NULL;
	printf("%s %d %s\n", m2.name, m2.age, m2.blood);

	Member people[5];
	for (int i = 0; i < 5; i++) {
		printf("이름 :");
		gets(people[i].name);
		printf("나이 : ");
		scanf("%d", &people[i].age);
		getchar();
		printf("혈액형 :");
		gets(people[i].blood);
	}*/
	

	//printf("%d\n", sizeof(mem));
	
	/*rintf("%d %.1fkg %d원\n", mem.age, mem.weight, mem.money);
	mem.age = 23;
	mem.weight = 72.6;
	mem.money = 20000;
	printf("%d %.1fkg %d원\n", mem.age, mem.weight, mem.money);*/
//}



/*
	구조체 - 사용자 정의 데이터 타입
	struct pos{
		int num;
		float funm;
		char name[20];

	}





*/