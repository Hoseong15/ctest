#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int(*pnum)[4]; // 배열포인터 사용할때 사용(배열포인터를 타입화)


//pnum init() {
//
//	static int num[3][4];
//	for (int i = 0; i < 3; i++) {
//		for (int k = 0; k < 4; k++) {
//			num[i][k] = rand() % 10 + k;
//		}
//	}
//	return num;
//}

void print_ary(int(*)[4]);


void main() {
	/*pnum p;
	p = init();
	printf("%d %d", p[0][1], p[1][2]);*/

	int ary[3][4] = { {1,2,3,4,},{5,6,7,8},{9,10,11,12} };

	print_ary(ary);

}


void print_ary(int(*pa)[4]) {

	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 4; k++) {
			printf("%5d", pa[i][k]);
		}
		printf("\n");
	}
}

//void input(int(*p)[5]) {
//	for (int i = 0; i < 5; i++) {
//		for (int k = 0; k < 5; k++) {
//			p[i][k] = rand() % 10 + i + k;
//		}
//	}
//}
//
//void print(int(*)[5]); //선언부와 정의부를 따로 나눌때는 형태만 갖춰도된다.
//
//
//void main() {
//	int board[5][5] = { 0, };
//	input(board);
//	print(board);
//
//
//	/*int(*p)[5] = board[5][5];
//	p = board;
//
//	for (int i = 0; i < 5; i++) {
//		for (int k = 0; k < 5; k++) {
//			p[i][k] = i * k + 2;
//		}
//	}
//	for (int i = 0; i < 5; i++) {
//		for (int k = 0; k < 5; k++) {
//			printf("%d ", board[i][k]);
//		}
//		printf("\n");
//	}*/
//
//}
//
//void print(int(*p)[5]) {
//
//
//}


//배열 포인터 - 다차원 배열을 다루기 위한 포인터이다.
//				다차원 배열의 두번째 크기부터를 배열포인터에 할당해줘야한다.
//				int arr[3][4]
//				int (*p)[4];

//				int arr[4][5];
//				int (*p)[5][2];






//void print(int * p);

//int** init() {
//	static int num = 10, num2 = 30, arr[4] = { 55,66,77,88 };
//	static int* parr[3] = { &num, &num2, arr };
//	return parr;
//}

//void amountUsed(int**day, char**detail);

//void main() {

	int yday[3] = { 12000,4500,5600 };
	int today[4] = { 5400,8900,12560,3700 };
	int day2[3] = { 8900,5300,21500 };
	char detail_yday[3][20] = { "소갈비특국밥", "담배", "커피" };
	char detail_today[4][20] = { "라면김밥","택시","이체","음료수" };
	char detail_day2[3][20] = { "택시","커피2잔","야식" };

	int* day[3] = { day2, yday,today };
	char* detail[3] = { detail_day2 ,detail_yday, detail_today };

	//printf("%s\n", detail[1]+40);

	amountUsed(day, detail);

//}

//void amountUsed(int** day, char** detail) {
	// yday는 어제, day2는 2일전, today는 오늘
	// 야식를 입력한다면 야식 금액은 얼마인가?.언제 먹었는지 출력

	/*char snack[20];
	int idx = 0, idx2= 0;
	printf("입력해보세요");
	gets(snack);

	for (int i = 0; i < 3; i++) {
		int e = i == 1 ? 4 : 3;
		for (int k = 0; k <= e*20; k+=20) {
			if (strcmp(detail[i] + k, snack) == 0) {
				idx = i;
				idx2 = k / 20;
				printf("언제 : %s 사용한 금액 : ", idx == 0 ? "2일전" : idx == 1 ? "어제" : "오늘");
				printf("%d\n", day[idx][idx2]);
			}
		}
	}*/
//}


	/*char mark[5][5] = { 0, };
	for (int i = 0;  i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) mark[i][j] = 'X';
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j || i+j == 4) mark[i][j] = 'X';
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%c", mark[i][j]);
		}
		printf("\n");
	}*/
	

	/*int** p2;
	p2 = init();
	printf("num -> %d\n", *(p2[0]));
	printf("num2 -> %d\n", *(p2[1]));
	printf("arr -> %d %d\n", p2[2][0], p2[2][1]);*/
	

	/*int num = 20;
	int arr[3] = { 10,20,30 };

	printf("%d\n", num);
	printf("arr -> %d  %d %d\n", arr[0], arr[1], arr[2]);

	int* p;
	p = &num;
	printf("p -> %d\n", *p);

	int** p2;
	p2 = &p;
	printf("p2 -> %p, *p2 -> %p, **p2 -> %d\n", p2, *p2, **p2);

	p = arr;
	printf("배열arr의 주소는 %p, p-> %p\n", arr,p);
	printf("%d %d %d\n", p[0], p[1], p[2]);

	p2 = &p;
	printf("%d %d %d \n", (*p2)[0], (*p2)[1], (*p2)[2]);*/ 
	// 연산자우선순위에서 []가 2순위여서 p2[2]가 실행되고 *이 실행되서 안되서
	// []가 보다 우선순위인 ()를 사용해야함

	

	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 }; // 2차원 배열
	//printf("%d %d\n", arr[0][1], arr[2][3]);
	//printf("%d %d\n", *arr[0] + 1, *arr[2] + 3);
	//printf("%d %d\n", *(*(arr + 0) + 1) , *(*(arr+2)+3) );


	///*포인터배열
	//int* p[3] = { arr[0],arr[1],arr[2] };
	//print(p);*/

	////배열 포인터
	//int(*p)[4]; //두번째 배열을 담아줘야한다.
	//p = arr;
	//print(arr);


//}

//포인터 배열
//void print(int **p) {
//	for (int k = 0; k < 4; k++) {
//		printf("%d ", p[0][k]);
//		
//	}
//	printf("\n");
//}


//배열 포인터
//void print(int (*p)[4]) {
//
//	for (int i = 0; i < 3; i++) {
//		for (int k = 0; k < 4; k++) {
//			printf("%d ", p[i][k]);
//		}
//		printf("\n");
//	}
//}


// 포인터배열 - 포인터변수의 공간이 연속적으로 할당 된 공간
//			  - 배열의 공간에는 메모리주소가 저장된다.
//			  - 포인터배열의 공간 하나하나는 1차원 포인터 변수와 동일하다.

// 포인터변수 - 1차원 포인터변수, 2차원 포인터변수, 3차원 포인터 변수
//			int num = 10; -> 변수
//			int *p = &num; -> 1차원 포인터변수
//			int arr[10]; -> 1차원 배열(변수와 동급)
//			p = arr; -> 1차원 포인터변수
//			int **p2 -> 2차원 포인터변수
//			p2 = &p; -> 1차원 포인터변수의 주소를 저장
//			int *parr[4]; -> 1차원 포인터 배열
//			p2 = parr; -> 포인터배열의 주소를 2차원 포인터에 저장

