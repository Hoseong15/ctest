#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {

	// 간단한 아케이드 게임을 만들고 있는 재홍
	// 방향키로 위(w) 아래(s) 왼쪽(a), 오른쪽(d)
	// 공격(k), 점프(1) 을 사용하고자 한다.
	// 키보드 조작에 따라 동작 할 내용을 printf로 출력하세요
	// 지정된키가 아닌 키를 조작할시에 아무것도 출력하지 않는다

	char move;
	printf("게임시작!");
	scanf("%c", &move);

	switch (move){
	case 'w' :{printf("위로 이동"); break;}
	case 's': {printf("아래로 이동"); break;}
	case 'a': {printf("왼쪽으로 이동"); break;}
	case 'd': {printf("오른쪽으로 이동"); break;}
	case 'k': {printf("공격!"); break;}
	case '1': {printf("점프"); break;}
	}
	





	// switch ~ case 문
	// case에 설정 된 값에 따라 동작되는 조건문이다.

	/*int c=0, d=0, res = 0;
	char result;
	printf("사칙연산 시작");
	scanf("%d%c%d", &c, &result, &d );
	
	switch (result) {
	case '+':
		res = c + d;
		break;
	case '-':
		res = c - d;
		break;
	case '*':
		res = c * d;
		break;

	case '/':
		res = c / d;
		break;
	default:
		printf("잘못된 연산자");
	}
	printf("%d%c%d=%d\n", c, result, d, res);*/

	/*int a, b;
	char c;
	scanf("%d%c%d", &a, &c, &b);
	printf("%c %d %d", c, a, b);



	int num = 1;
	switch (num){
		case 1:
			printf("파일 저장");
			break;
		case 2:
			printf("파일 열기");
			break;
		case 3:
			printf("프로그램 종료");
			break;
		default:
			printf("잘못된 선택입니다.");
	}*/
	






	// 민수가 외출하였다가 집에 들어왔다.
	// 신발장에 동작감지 센서에 의해 
	// 집에 들어왔다는걸 감지했다.
	// 집의 온도가 19도라면 3도 높은 22도로까지
	// 온도를 올려주고 가동을 멈추는 보일러 시스템이라면
	// 민수가 집에 들어 왔을경우 현재 내부의 온도를 측정하여 3도
	// 높은 온도까지 올려주는 보일러를 동작시키세요.
	// 내부온도가 25도라면 보일러 가동안함
	// 1. 민수가 집에 들어왔는가? (1- 들어옴, 2-안들어옴)
	// 2. 현재 집 온도는 ?

	//int home, temp;
	//printf("민수놈 집에 들어왔냐? (1-들어옴, 2-안들어옴): ");
	//scanf_s("%d", &home);

	//if (home == 1) {
	//	printf("현재 집 온도는 몇도?");
	//	scanf_s("%d", &temp);
	//	if (temp >= 25) {
	//		printf("가동안함");
	//	}
	//	else {
	//		printf("현재 집 온도는 %d, 설정온도 %d", temp, temp + 3);
	//	}
	//}
	//else {
	//	printf("보일러 OFF");
	//}


	/*float height = 179.5;
	float weight = 75.0;

	if (height >= 187.5 && weight < 80) {
		printf("ok\n");
	}
	else {
		printf("cancel\n");
	}*/


	/*int a = 0, b = 0;
	
	if (a > 0) {
		b = 1;
	}
	else if (a == 0) {
		b = 2;
	}
	else {
		b = 3;
	}
	printf("b : %d\n", b);*/


	/*if (5 > 6) {
		printf("조건식이 참이라면 실행");
	}
	else if(5 < 1) {
		printf("조건식이 거짓일때 실행");
	}*/

}