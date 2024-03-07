#include <stdio.h>
#include <stdbool.h> // bool

#define p 3.14

void main() {

	// bmi = (체중 / (키(m단위)*키(m단위)))
	
	int kg = 0;
	float cm = 0;
	float bmi = 0;

	printf("몸무게 , 키를 입력하세요 : ");
	scanf_s("%d %f", &kg, &cm);
	cm = cm / 100;

	bmi = kg / (cm * cm);

	printf("(%.1f)%s\n", bmi, (bmi >= 20.0 && bmi < 25.0) ? "표준" : "체중관리 필요");






	


	/*int seats = 70, audience = 65;
	double rate = 0;

	rate = (double)audience / seats *100;
	printf("%.1lf%%\n", rate);

	float hour = 3.76;
	int hours = (int)hour;
	float a = hour - hours;
	int min = a * 60;
	int sec = (a * 3600) - (min * 60);
	printf("%.2f 시간은 %d시간 %d분 %d초입니다.\n", hour, hours, min, sec);*/


	//printf("%d \n", 24 & 19);
	//printf("%d", ~14); //00001110 -> 11110001 -> 0부분만 더한다 음수로변환될 경우 양수에 숫자가 한개 가 더 많아서 하나 더 추가여서 -15

	//int num = 14;
	//int res = 0;

	//res = (~num) + 1;
	//printf("%d %d \n", ~num, res);

	//printf("%d\n", 43 ^ 15);

	//printf("%d\n", 4 << 2);  //000100 -> 왼쪽으로 2칸 이동
	//printf("%d\n", 16 >> 3); //010000 -> 오른쪽으로 3칸 이동

	//printf("%d\n", 11 * 9);
	//printf("%d\n", (11 << 3) + 11);

	// 비트 연산자 - 비트 논리연산자, 비트 시프트 연산자
	// 비트 논리연산자 - and( & ), or( | ), not( ~ ), xor( ^ )
	// 비트 시프트연산자 - left( << ), right( >> ); 
	// 데이터단위
	// bit - byte - kbyte - mbyte - gbyte - ...
	// bit -> 0, 1 (2진수)
	// 1byte(8bit) -> 문자, 숫자는 최대 255까지 가능
	// 1kbyte(1024byte) -> 몇개정도의 문단
	// 1mbyte(1024kbyte) -> mp3음원 1분
	// 1gbyte(1024mbyte) -> HD급 영화 30분정도


	//종권이 집에 가습기가 있다
	// 가습기에 자동 설정으로 습도 55로 설정했다.
	// 집에 습도가 60이상되면 가습기는 중지되고
	// 습도가 50이하 되면 가습기가 가동된다.
	// 집의 습도를 입력받아 가습기의 동작을 출력
	/*int a = 0;

	printf("습도를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("%s \n", a >= 60 ? "가습기 중단" : a <= 50 ? "가습기 가동" : "가습기 작동중");*/

	



	// (조건식) ? 참 : 거짓;
	/*int result = 0;
	//int a = 0, b = 0;
	//result = (10 > 5) ? 1000 : 55;
	//printf(" %d\n", result);
	//printf("%s\n", (3 > 5) ? "5보다 크다" : "5보다 작다");

	//(3 > 5) ? printf("5보다 작다") : printf("5보다 크다");
	//(3 > 5) ? scanf_s("%d", &a) : scanf_s("%d", &b);
	//printf("%d %d\n", a, b);*/



	/*int num = 10;
	//float f = 4.53;
	//double dnum = 5.44;
	//char ch = 'r';

	//printf("int형 변수의 크기 : %d\n", sizeof(num));
	//printf("변수의 크기 : %d\n", sizeof(ch));*/


	// 원형 트랙의 반지름이 r이고
	// 트랙위을 자동차가 달린다.
	// 자동차의 속도는 k/h이다.
	// 두바퀴를 완주하는데 몇분이 걸리는가?

	/*int r = 0, k = 0;
	const float pi = 3.14;
	int dist = 0;
	float time = 0;

	printf("반지름 : ");
	scanf_s("%d", &r);

	printf("자동차 속도 : ");
	scanf_s("%d", &k);

	dist = r * 2 * 3.14;

	time = (dist / (float)k) * 60;
	printf("트랙의 길이: %dkm \n", dist);
	printf("자동차의 속도 : %d \n", k);
	printf("두 바퀴 완주 : %f분 \n", time);*/


	/*double radius;
	double speed;  
	double time;   

	printf("원형 트랙의 반지름을 입력: ");
	scanf_s("%lf", &radius);

	printf("자동차의 속도를 입력: ");
	scanf_s("%lf", &speed);

	speed * 3.14;

	double cir = 2 * 3.141592 * radius;

	time = (cir / speed) * 60;

	time *= 2;

	printf("두 바퀴를 완주하는데 걸리는 시간: %lf분\n", time);*/

	

	//int money = 5300;
	//int 순대국밥 = 6500;
	//int 편의점라면 = 1800;

	//printf("%s \n", (money >= 순대국밥) && (money >= 편의점라면 ) ? "사먹자" : "돈없어");
	//printf("%d \n", (money >= 순대국밥) || (money >= 편의점라면));
	//printf("%d \n", !(money >= 순대국밥));

	/*int kor = 3, eng = 5, mat = 4;
	int credits = kor + eng + mat;


	float kscore = 3.8;
	float escore = 4.4;
	float mscore = 3.9;
	float grade = (kscore + escore + mscore) / 3;



	printf("%d \n", grade > 4.0 && credits >= 10);*/


	// and(&&), or(||), not(!)
	// and는 두개 피연산자가 모두 참일경우에만 참
	// or은 두개 피연산자가 모두 거짓일경우에만 거짓
	// not은 부정(참 -> 거짓, 거짓 -> 참)


	/*bool isMoney = true;
	isMoney = 5 > 6;
	printf(" %s ", isMoney ? "true" : "false");*/
}