#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int(*pnum)[4]; // �迭������ ����Ҷ� ���(�迭�����͸� Ÿ��ȭ)


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
//void print(int(*)[5]); //����ο� ���Ǻθ� ���� �������� ���¸� ���絵�ȴ�.
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


//�迭 ������ - ������ �迭�� �ٷ�� ���� �������̴�.
//				������ �迭�� �ι�° ũ����͸� �迭�����Ϳ� �Ҵ�������Ѵ�.
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
	char detail_yday[3][20] = { "�Ұ���Ư����", "���", "Ŀ��" };
	char detail_today[4][20] = { "�����","�ý�","��ü","�����" };
	char detail_day2[3][20] = { "�ý�","Ŀ��2��","�߽�" };

	int* day[3] = { day2, yday,today };
	char* detail[3] = { detail_day2 ,detail_yday, detail_today };

	//printf("%s\n", detail[1]+40);

	amountUsed(day, detail);

//}

//void amountUsed(int** day, char** detail) {
	// yday�� ����, day2�� 2����, today�� ����
	// �߽ĸ� �Է��Ѵٸ� �߽� �ݾ��� ���ΰ�?.���� �Ծ����� ���

	/*char snack[20];
	int idx = 0, idx2= 0;
	printf("�Է��غ�����");
	gets(snack);

	for (int i = 0; i < 3; i++) {
		int e = i == 1 ? 4 : 3;
		for (int k = 0; k <= e*20; k+=20) {
			if (strcmp(detail[i] + k, snack) == 0) {
				idx = i;
				idx2 = k / 20;
				printf("���� : %s ����� �ݾ� : ", idx == 0 ? "2����" : idx == 1 ? "����" : "����");
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
	printf("�迭arr�� �ּҴ� %p, p-> %p\n", arr,p);
	printf("%d %d %d\n", p[0], p[1], p[2]);

	p2 = &p;
	printf("%d %d %d \n", (*p2)[0], (*p2)[1], (*p2)[2]);*/ 
	// �����ڿ켱�������� []�� 2�������� p2[2]�� ����ǰ� *�� ����Ǽ� �ȵǼ�
	// []�� ���� �켱������ ()�� ����ؾ���

	

	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 }; // 2���� �迭
	//printf("%d %d\n", arr[0][1], arr[2][3]);
	//printf("%d %d\n", *arr[0] + 1, *arr[2] + 3);
	//printf("%d %d\n", *(*(arr + 0) + 1) , *(*(arr+2)+3) );


	///*�����͹迭
	//int* p[3] = { arr[0],arr[1],arr[2] };
	//print(p);*/

	////�迭 ������
	//int(*p)[4]; //�ι�° �迭�� �������Ѵ�.
	//p = arr;
	//print(arr);


//}

//������ �迭
//void print(int **p) {
//	for (int k = 0; k < 4; k++) {
//		printf("%d ", p[0][k]);
//		
//	}
//	printf("\n");
//}


//�迭 ������
//void print(int (*p)[4]) {
//
//	for (int i = 0; i < 3; i++) {
//		for (int k = 0; k < 4; k++) {
//			printf("%d ", p[i][k]);
//		}
//		printf("\n");
//	}
//}


// �����͹迭 - �����ͺ����� ������ ���������� �Ҵ� �� ����
//			  - �迭�� �������� �޸��ּҰ� ����ȴ�.
//			  - �����͹迭�� ���� �ϳ��ϳ��� 1���� ������ ������ �����ϴ�.

// �����ͺ��� - 1���� �����ͺ���, 2���� �����ͺ���, 3���� ������ ����
//			int num = 10; -> ����
//			int *p = &num; -> 1���� �����ͺ���
//			int arr[10]; -> 1���� �迭(������ ����)
//			p = arr; -> 1���� �����ͺ���
//			int **p2 -> 2���� �����ͺ���
//			p2 = &p; -> 1���� �����ͺ����� �ּҸ� ����
//			int *parr[4]; -> 1���� ������ �迭
//			p2 = parr; -> �����͹迭�� �ּҸ� 2���� �����Ϳ� ����

