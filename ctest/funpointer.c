#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//typedef void(*p)(); // 형태가 같아야한다.
//
//void print();
//void input();
//void init();



void main() {
	int num = 10;
	char ch = 'a';
	float f = 3.24;
	char name[20] = "이순신";

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

//void print() {printf("그냥출력\n");}
//void input() {printf("input 입력함수실행\n");}
//void init() { printf("초기화함수 실행\n"); }











// 포인터
// 1차원 포인터, 2차원 포인터, 3차원 포인터변수
// 포인터 배열, 배열 포인터
// 함수포인터