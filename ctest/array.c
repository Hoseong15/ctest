#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 20
#define max  4

void main() {
	//const int size = 5; // �����ϰ��������� const�� ������(define����ؾ���)
	//int arr[size];

	//int arr[5] = { 0, };
	//int b[] = { 10, 20, 30, 40 };

	//c���� �迭���� �ݺ��� ����Ҷ� �ùٸ� ��
	//for (int i = 0; i < sizeof(arr)/sizeof(int); i++) arr[i] = 0;
	//for (int i = 0; i < size; i++) arr[i] = 0; (�迭�� ũ�Ⱑ ������� ���� �� ����ϸ��) 

	//printf("%d", arr[1]);


	//int ary[5];

	//ary[0] = 10;
	//ary[1] = 20;
	//ary[2] = ary[0] + ary[1];
	//scanf_s("%d", &ary[3]);

	//printf("%d\n", ary[2]);
	//printf("%d\n", ary[3]);
	//printf("%d\n", ary[4]);

	/*int banana[8] = { 2,3,4,5,1,2,3,9 };
	int apple[8] = { 0, };

	for (int i = 0; i < sizeof(banana) / sizeof(int); i++) {
		apple[i] = banana[i];
	}

	for (int i = 0; i < sizeof(apple) / sizeof(int); i++) {
		printf("%d ", apple[i]);
	}*/


	// num�迭�� ���߿��� ¦�� �� ã�Ƽ� search�迭�� ����
	/*int num[] = { 23,15,16,19,2,4,8,20,11 };
	int search[10] = { 0, };
	int a = 0;
	
	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		if (num[i] % 2 == 0) {
			search[a++] = num[i];
		}
	}
	for (int i = 0; i < sizeof(search) / sizeof(int); i++) {
		printf("%d ", search[i]);
	}*/


	// �迭�� ũ��� 20, �迭�� ��������(���� 11-50)�� �����ϰ�,
	// ���ٿ� 4���� ����ϼ���.
	/*int num[size];
	int a[max];

	for (int i = 0; i < size; i++) {
		num[i] = rand() % 40 + 11;
	}
	for (int i = 0; i < size; i++) {
		printf("%2d ", num[i]);
		if ((i +1) % max == 0) {
			printf("\n");
		}
		
	}*/


	char ch[10] = { 'b','o','y',NULL,'g','i','r','l',NULL };
	printf("%s  %s\n", ch, ch + 4);

	char word[6] = "apple";
	/*word[0] = 'a';
	word[1] = 'p';
	word[2] = 'p';
	word[3] = 'l';
	word[4] = 'e';
	word[5] = NULL;*/

	printf("%c%c%c%c%c\n", word[0], word[1], word[2], word[3], word[4]);
	printf("%s\n", word);
	//printf("%s\n", word + 0);

	
	




}