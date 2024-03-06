#include <stdio.h>

void main() {

	// 1부터 10까지 출력하면서 짝수 출력할떄는 ***을 같이 출력하세요.

	// 반복문 - while, for, do~while

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

	// 1부터 10까지 반복문을 만들고 출력하는데
	// 숫자 출력 대신 , 숫자만큼 *을 출력하세요.

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