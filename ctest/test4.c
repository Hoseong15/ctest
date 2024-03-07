#include <stdio.h>
#include <stdlib.h> // 난수
#include <stdbool.h> // bool

void main() {

	//srand(time(NULL));

	/*printf("%2d %2d %2d %2d %2d", 1, 20,11,12,13);*/

	/*int num = 0, cnt = 0;   
	bool isPrime = true;
	printf("양수입력");
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







	// 정수를 계속 입력한다. 입력하는 정수의 범위는 1~50중에서만 입력
	// 정수를 입력할때 마다 난수를 발생시킨다.
	// 난수의 범위는 1~9다.
	// 내가 입력한 정수가 난수의 배수라면 당첨이라고 출력하고 반복문 종료

	/*while (1) {
		int a = 0;
		printf("1부터 50 사이의 정수를 입력: ");
		scanf_s("%d", &a);

		if (a < 1 || a > 50) {
			printf("1부터 50 사이의 정수만 입력.\n");
			continue;
		}
		int num = rand() % 9 + 1; 
		printf("난수: %d\n", num);

		if (num != 0 && a % num == 0) {
			printf("당첨!\n");
			break;
		}
	}*/

	//int num = rand()%10 + 1; 
	//21 ~ 57
	//int num = rand()%37 + 21; 
	//printf("%d", num);




	// 내가 입력한 정수에 맞는 구구단을 출력한다.
	// 단, 5단을 출력할때는 5*5 = 25 다음에 6*5=30으로 변경되어 출력
	
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
	

	// 구구단 2단을 출력하고, 2 * 9 = 18이 마지막줄에 출력되고 나면
	// 다음줄에 9*2 = 18로 시작하여 9단을 출력하세요
	// 전체 변수는 총 2개만 사용하세요.

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
		printf("정수 입력(0-종료) : ");
		scanf_s("%d", &num);
	}*/

	/*int num = 0;
	do {
		printf("정수 입력(0-종료) : ");
		scanf_s("%d", &num);
	} while (num != 10);*/
	

	// 반복문 - while, for, do~while

	// while문
	//	int a = 1; 초기값
	// while(a <= 5){조건식
	//	a++; 증감식
	// }

	// for문
	// for(int a = 1; a <= 5; i++{초기값; 조건식; 증감식
	// }

	// do~while문
	// int a = 1; 초기값
	// do{
	//	a++; 증감식
	// } while (a <= 4);조건식



	// 1부터 10까지 출력하면서 짝수 출력할떄는 ***을 같이 출력하세요.

	/*for (int i = 1; i <= 10; i++) {
		if (i % 2 == 0) {
			printf("%d *** \n", i);
		}
		else {
			printf("%d\n", i);
		}
		
	} */

	// 1부터 10까지 반복문을 만들고 출력하는데
	// 숫자 출력 대신 , 숫자만큼 *을 출력하세요.

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