#include <stdio.h>
#include <stdlib.h> // ����
#include <stdbool.h> // bool

void main() {

	//srand(time(NULL));

	/*printf("%2d %2d %2d %2d %2d", 1, 20,11,12,13);*/

	/*int num = 0, cnt = 0;   
	bool isPrime = true;
	printf("����Է�");
	scanf_s("%d", &num);

	for (int i = 2; i <= num; i++) {
		isPrime = true;
		for (int a = 2; a < i; a++) {  
			if (i % a == 0)
				isPrime = false;
				break;             
		}
		if (isPrime == true)
			printf("%5d", i); cnt++;
		if (cnt == 5) 
			printf("\n"); cnt = 0;

	}*/







	// ������ ��� �Է��Ѵ�. �Է��ϴ� ������ ������ 1~50�߿����� �Է�
	// ������ �Է��Ҷ� ���� ������ �߻���Ų��.
	// ������ ������ 1~9��.
	// ���� �Է��� ������ ������ ������ ��÷�̶�� ����ϰ� �ݺ��� ����

	/*while (1) {
		int a = 0;
		printf("1���� 50 ������ ������ �Է�: ");
		scanf_s("%d", &a);

		if (a < 1 || a > 50) {
			printf("1���� 50 ������ ������ �Է�.\n");
			continue;
		}
		int num = rand() % 9 + 1; 
		printf("����: %d\n", num);

		if (num != 0 && a % num == 0) {
			printf("��÷!\n");
			break;
		}
	}*/

	//int num = rand()%10 + 1; 
	//21 ~ 57
	//int num = rand()%37 + 21; 
	//printf("%d", num);




	// ���� �Է��� ������ �´� �������� ����Ѵ�.
	// ��, 5���� ����Ҷ��� 5*5 = 25 ������ 6*5=30���� ����Ǿ� ���
	
	/*int a = 0;
	scanf_s("%d", &a);
	for (int i = 1; i <= 9; i++) {
		if (a == 5 && i == 6) {
			int temp = a;
			a = i;
			i = temp;
		}
		printf("%d * %d = %d\n", a, i, a * i);

		if (a == 5 && i == 5) {
			a++; i--;
		}
	}*/
	

	// ������ 2���� ����ϰ�, 2 * 9 = 18�� �������ٿ� ��µǰ� ����
	// �����ٿ� 9*2 = 18�� �����Ͽ� 9���� ����ϼ���
	// ��ü ������ �� 2���� ����ϼ���.

	/*int a = 2;
	int b = 1;
	for (; b <= 9; b++) {
		printf("%d * %d = %d \n", a, b, a * b);
	}
	b--;
	for (; a <= 9; a++) {
		printf("%d * %d = %d \n", b, a, b * a);
	}*/
	

	/*int num = 1;

	while (num !=11) {
		printf("���� �Է�(0-����) : ");
		scanf_s("%d", &num);
	}*/

	/*int num = 0;
	do {
		printf("���� �Է�(0-����) : ");
		scanf_s("%d", &num);
	} while (num != 10);*/
	

	// �ݺ��� - while, for, do~while

	// while��
	//	int a = 1; �ʱⰪ
	// while(a <= 5){���ǽ�
	//	a++; ������
	// }

	// for��
	// for(int a = 1; a <= 5; i++{�ʱⰪ; ���ǽ�; ������
	// }

	// do~while��
	// int a = 1; �ʱⰪ
	// do{
	//	a++; ������
	// } while (a <= 4);���ǽ�



	// 1���� 10���� ����ϸ鼭 ¦�� ����ҋ��� ***�� ���� ����ϼ���.

	/*for (int i = 1; i <= 10; i++) {
		if (i % 2 == 0) {
			printf("%d *** \n", i);
		}
		else {
			printf("%d\n", i);
		}
		
	} */

	// 1���� 10���� �ݺ����� ����� ����ϴµ�
	// ���� ��� ��� , ���ڸ�ŭ *�� ����ϼ���.

	/*for (int i = 1; i <= 10; i++) {
		for (int a = 1; a <= i; a++) {
			printf("*");
		}
		printf("\n");
	}*/

	
	/*for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 4 - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i -1; k++) {
			printf("*");
		}
		printf("\n");
	}*/



}