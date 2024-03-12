#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int* init();
void input(int * p);



void main() {
	int* p;
	p = init();
	input(p);
	printf("%d %d %d %d\n", p[0], p[1], p[2], p[3]);
	printf("%d %d %d %d\n", p[0], p[1], p[2], p[3]);
	printf("%d %d %d %d\n", p[0], p[1], p[2], p[3]);

}

int* init() {
	static int arr[4] = { 0, };
	return arr;
}

void input(int* p) {
	printf("정수 입력 : ");
	scanf("%d%d%d%d", p, p + 1, p + 2, p + 3);
}





//void test(); // 함수선언
//
//extern int size; // 외부변수
//
//int count = 10, arr[10]; // 전역변수
//int* pppp;
//
//
//void main() {
//	register int reg = 10; // 레지스터 변수
//
//	//int num = 10; //지역변수
//	//for (int i = 1; i <= 4; i++) { //i - 지역변수}
//	
//	test();
//	test();
//	
//}
//
//void test() { // 함수 정의
//	static int a = 10; //정적변수
//	a++;
//	printf("%d\n", a);
//	
//}

/*

지역변수 - 함수내에서 생성한 변수, 제어문에서 생성된 변수
	     - 변수가 생성된 영역에서만 사용 가능
		 - 함수가 실행 또는 제어문의 실행할때 변수 생성
		 - 함수종료, 제어문 종료시에 변수 해제

전역변수 - 전체 영역에서 사용가능 한 변수

정적변수 - 타입 앞에 static을 붙여준다.

외부변수 - 프로그램의 외부변수의 데이터를 가져오는 함수
		 - 가져오고자 하는 변수의 이름과 동일하게 생성해야된다.
		 - 가지고 올수 있는 변수는 전역변수만 가능하다.
		 - 단, 정적 전역변수는 못 가져온다.

레지스터 변수 - 위의 4개 변수들은 ram(메모리)공간에 생성되는 변수들이고
			  - cpu내부에 공간 생성


*/