#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	char ch = 0;

	printf("문자입력 :");
	scanf("%c", &ch); //#define을 했을때
	printf("%c문자의 아스키 코드 값은 %d입니다.", ch, ch);


	/*int num = 0;
	int num2 = 0;
	printf("정수 두개 입력 :");
	scanf_s("%d %d" , &num, &num2); #define없을때는 _s

	printf("확인 %d %d\n", num, num2);*/


	// 민수가 다이어트를 한다
	// 목표치는 15kg감량
	// 현재 몸무게는 75kg이다
	// 5일동안 다이어트를 한다면 하루에 몇kg씩 감량 해야하는가

	/*int to = 15;
	int day = 5;
	int tot = to / day;

	printf("하루에 몇 kg감량해야하는가? %dkg", tot);*/


	//int num = 10; // 변수의 초기화
	// 변수를 생성하면서 처음 저장될 값 설정하는거


	/*int a = 70, en = 80, mat= 90;
	int tot = a + en + mat;

	printf("국어 : %d, 영어 : %d, 수학 : %d \n총점 : %d ", a, en, mat, tot);*/


	//float f = 3.1234561; // 소수점 6자리
	//double d = 3.12345678901234567; // 소수점 15자리
	//long double ld = 3.12345678901234567;

	//printf("%f, %.15f, %f \n", f, d, ld);
	//printf("%f %lf %lf \n", f, d, ld);

	//int a = 0;
	//a = a + 1;
	//a = a + 2;
	//a = a + 3;
	//printf("a : %d", a);
	//ctrl + k + u -> 주석풀기

}