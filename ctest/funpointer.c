#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//typedef void(*p)(); // ���°� ���ƾ��Ѵ�.
//
//void print();
//void input();
//void init();



void main() {
	int num = 10;
	char ch = 'a';
	float f = 3.24;
	char name[20] = "�̼���";

	void* vp;
	vp = &num;
	printf("%d\n", *(int*)vp);
	vp = &ch;
	printf("%c\n", *(char*)vp);
	vp = &f;
	printf("%f\n", *(float*)vp);
	vp = name;
	printf("%s\n", (char*)vp);
	





	//p func_arr[3] = { init,input,print };
	//func_arr[0]();
	//func_arr[1]();
	//func_arr[2]();



}

//void print() {printf("�׳����\n");}
//void input() {printf("input �Է��Լ�����\n");}
//void init() { printf("�ʱ�ȭ�Լ� ����\n"); }











// ������
// 1���� ������, 2���� ������, 3���� �����ͺ���
// ������ �迭, �迭 ������
// �Լ�������