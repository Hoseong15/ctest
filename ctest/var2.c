#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void print(int * p);


void main() {
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 }; // 2차원 배열
	printf("%d %d\n", arr[0][1], arr[2][3]);
	printf("%d %d\n", *arr[0] + 1, *arr[2] + 3);
	printf("%d %d\n", *(*(arr + 0) + 1) , *(*(arr+2)+3) );


	/*포인터배열
	int* p[3] = { arr[0],arr[1],arr[2] };
	print(p);*/

	//배열 포인터
	int(*p)[4]; //두번째 배열을 담아줘야한다.
	p = arr;
	print(arr);


}

//포인터 배열
//void print(int **p) {
//	for (int k = 0; k < 4; k++) {
//		printf("%d ", p[0][k]);
//		
//	}
//	printf("\n");
//}


//배열 포인터
void print(int (*p)[4]) {

	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 4; k++) {
			printf("%d ", p[i][k]);
		}
		printf("\n");
	}
}


