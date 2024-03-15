#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int* init(); // 공간할당
void print(int*prime, int size);

void main() {

	int size = 0;
	printf("양수입력 : ");
	scanf("%d", &size);
	print(init(size),size);
	
}

int* init(int size) {

	int* temp = (int*)malloc((size - 2) * sizeof(int));
	for (int i = 0; i < size-2; i++){
		temp[i] = i + 2;
	}
	return temp;
}

void print(int* prime, int size) {
	for (int i = 0; i < size-2; i++) {
		if (i % 5 == 0 && i != 0) printf("\n");
		bool isPrime = false;
		for (int k = 2; k < prime[i]; k++) {
			if (prime[i] % k == 0) {
				isPrime = true; break;
			}
		}
		if (isPrime == true)printf(" %2c ", 'x');
		else printf(" %2d ", prime[i]);
	}
}











//int* init() {
//	int* p = (int*)malloc(sizeof(int) * 3);
//	p[0] = 100; p[1] = 200; p[2] = 300;
//	return p;
//
//}
	/*int* p;
	p = init();
	printf("%d %d\n", p[0], p[1]);
	printf("%d %d\n", p[0], p[1]);
	free(p);
	printf("%d %d\n", p[0], p[1]);*/

	/*int* pm = (int*)malloc(20);
	int* pc = (int*)calloc(5,sizeof(int));

	printf("%d %d\n", pm[0], pm[1]);
	printf("%d %d\n", pc[0], pc[1]);

	pm[0] = 10; pm[1] = 20; pm[2] = 30; pm[3] = 40; pm[4] = 50;
	pc[0] = 1; pc[1] = 2; pc[2] = 3; pc[3] = 4; pc[4] = 5;

	printf("%d %d %d\n", pm[0], pm[3], pm[4]);
	printf("%d %d %d\n", pc[0], pc[1], pc[4]);

	printf("pm -> %p, pc -> %p\n", pm, pc);

	int new_size = 0;
	printf("추가로 저장할 데이터 갯수:");
	scanf("%d", &new_size);
	int* temp = NULL;
	temp = (int*)malloc(20+(sizeof(int) * new_size));
	for (int i = 0; i < 5; i++) {
		temp[i] = pm[i];
	}
	free(pm);
	pm = temp;
	for (int i = 5; i < new_size+5; i++) {
		printf("추가 데이터 입력 : ");
		scanf("%d", &pm[i]);
	}
	for (int i = 0; i < new_size+5; i++) {
		printf("%d ", pm[i]);
	}
	printf("\n");*/


	//int* oldpm = pm;
	//if ((pm = (int*)realloc(pm, 28)) == NULL) {
	//	free(oldpm);
	//}
	//pm[5] = 60;
	//printf("%d\n", pm[5]);

	//pm = (int*)realloc(pm, 28);  // realloc은 원래 크기를 늘리고 줄이는게 아니라 새롭게 할당해서 주소를 넘겨주는것이다
	//pm[5] = 60; pm[6] = 70;
	//printf("%d %d\n", pm[5], pm[6]);


	//int size = 5;
	////int arr[size]; 은 안되지만
	//int arr[5];
	//printf("할당크기 : ");
	//scanf("%d", &size);
	//int* p = (int*)malloc(20);
	////int* p = (int*)malloc(size*4);은 가능하다
	//p[0] = 10;
	//p[1] = 20;
	//p[2] = 30;
	//p[3] = 40;
	//p[4] = 50;

	//for (int i = 0; i < size; i++) {
	//	printf("%d\n", p[i]);
	//}
	//free(p);
//}


/*
동적 메모리 할당
malloc(할당), ca`lloc(할당), realloc(재할당), free(해체)


(정적할당) 프로그램 실행하기전에 메모리공간에 할당
int num = 10;
char ch = 'a';
int arr[20];


메모리의 영역은 User와 system으로 나뉘어
user영역은 크게 코드, 스택, 데이터, 힙으로 나뉘어 사용된다.

지역변수, 정적지역변수(배열) -> 메모리의 스택영역에 할당된다.
전역변수, 외부변수 -> 메모리의 데이터 영역에 할당된다.
일반함수 -> 메모리의 코드 영역에 할당
코드, 스택, 데이터 영역의 크기는 한정적이다.

힙 -> 동적할당

*/