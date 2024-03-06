#include <stdio.h> 
//#include "aa .h"  커스텀

//void main() {
//	/*printf("첫 c 테스트");
//	printf("내가 출력하고싶은거 @#!\\%%^&* 아무거나 입력"); */
//	// %,\은 특별한 기능이 있어서 출력을 하려면 두번 입력해야한다.
//	
//	int age = 25;
//	printf("내 나이는 %d입니다.\n",age);
//
//	printf("내 키는 %.1fcm 이고, 몸무게는 %dkg다\n", 180.3, 78);
//
//	printf("%d을 %d로 나누면 %.1f입니다.\n", 1, 2, 0.5);
//
//	printf("%s \n", "가");
//	printf("%d \n", 'a');
//	
//	printf("R은 알파벳에서 %d번째에 있습니다", 'R' - 'A' + 1);
//
//}

char main() {
	int birth = 19990101;
	short age = 25;
	unsigned char ch = 69;
	//unsigned 음수쪽 숫자를 양수쪽으로 변경 -> 255까지 가능
	int result = 0;
	printf(" %d  %d  %d \n", birth, age, ch);

	ch = 130;
	printf("%d  %c \n", ch, ch);
	// char은 -128~127까지 범위 127부터 130까지 3칸이동 -> 뒤로 3칸이동 -> -128-> -127 -> -126나온다
	result = ch + age;
	printf("결과 %d\n", result);
	


}




/*

	데이터 타입
		정수형 - int(4), long(8), short(2), char(1)

		실수형 - float(4), double(8), longdouble(8)

		문자형 - char(1) 

		void - 함수나 메서드의 반환값을 제공하지 않는 의미로 사용



	형식 지정자(8가지는 꼭 알아두어야함)

	%d - 10진수 정수 -> int, short
	%ld - 10진수 정수 -> long
	%f - 10진수 실수 -> float, double
	%lf - 10진수 실수 -> double
	%c - 문자 -> char
	%s - 문자열 -> char*
	%p - 메모리주소 -> void*

	%o - 8진수 -> int
	%x - 16진수 -> int
	%u - 부호없는 10진수 -> unsigned int

*/