#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void main() {

	int size = 5;
	//int arr[size]; �� �ȵ�����
	int arr[5];
	printf("�Ҵ�ũ�� : ");
	scanf("%d", &size);
	int* p = (int*)malloc(20);
	//int* p = (int*)malloc(size*4);�� �����ϴ�
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
���� �޸� �Ҵ�
malloc(�Ҵ�), ca`lloc(�Ҵ�), realloc(���Ҵ�), free(��ü)


(�����Ҵ�) ���α׷� �����ϱ����� �޸𸮰����� �Ҵ�
int num = 10;
char ch = 'a';
int arr[20];


*/