#include <stdio.h>

void main() {

	// 1���� 10���� ����ϸ鼭 ¦�� ����ҋ��� ***�� ���� ����ϼ���.

	// �ݺ��� - while, for, do~while

	/*while (1) {

	}*/
	for (int i = 1; i <= 10; i++) {
		if (i % 2 == 0) {
			printf("%d *** \n", i);
		}
		else {
			printf("%d\n", i);
		}
		
	} 

	// 1���� 10���� �ݺ����� ����� ����ϴµ�
	// ���� ��� ��� , ���ڸ�ŭ *�� ����ϼ���.

	/*for (int i = 1; i <= 10; i++) {
		for (int a = 1; a <= i; a++) {
			printf("*");
		}
		printf("\n");
	}*/

	
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10 - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i -1; k++) {
			printf("*");
		}
		printf("\n");
	}



}