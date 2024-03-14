#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void main() {

	int size = 5;
	//int arr[size]; 은 안되지만
	int arr[5];
	printf("할당크기 : ");
	scanf("%d", &size);
	int* p = (int*)malloc(20);
	//int* p = (int*)malloc(size*4);은 가능하다
	p[0] = 10;
	p[1] = 20;
	p[2] = 30;
	p[3] = 40;
	p[4] = 50;

	for (int i = 0; i < size; i++) {
		printf("%d\n", p[i]);
	}
}


/*
동적 메모리 할당
malloc(할당), ca`lloc(할당), realloc(재할당), free(해체)


(정적할당) 프로그램 실행하기전에 메모리공간에 할당
int num = 10;
char ch = 'a';
int arr[20];


*/