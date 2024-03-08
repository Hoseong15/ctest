#include <stdio.h>
#include <stdlib.h>



// 재귀함수 - 자신을 실행시키는 함수




//void out(int num) {
//	printf("%d\n",num);
//	if (num < 10) {
//		out(++num);
//	}
//	return;
//}


// 재귀함수로 구구단 4단 출력 해보세요
//void four(int x, int y) {
//	printf("%d * %d = %d\n", x,y, x*y);
//	if (y == 9)return;
//	four(x, y + 1);
//}

//int fac(int num) {
//	if (num == 1) return 1;
//	return num * fac(num - 1);
//}
//
//int ten(int x) {
//	if (x == 1) return 1;
//	return x + ten(x - 1);
//}



// c에서 함수를 만들때 main위에 만들어야한다.

//void a();
//void b();
//void c();
//void d();
//void e();


// 함수이름은 함수의 기능에 맞는 이름으로정한다. 네이밍표기법에따라
// 매개변수는 함수의 내용을 실행하는데 외부데이터가 필요한경우 생성한다.
// return 반환은 함수가 실행되고 나온 결과 값에대해 외부에서 사용해야 되는경우
// 반환타입 함수이름(매개변수)

//void sum(int a, int b) {
//	int add = a+b;
//	printf("합 : %d\n", add);
//}
//
//int total(int k, int e, int m) {
//	int add = k + e + m;
//	printf("총점은 : %d\n", add);
//	return add;
//}
//
//void avg(int tot) {
//	printf("평균은 %d\n", tot / 3);
//}


//int sum(int x, int y) {
//	int temp;
//	temp = x + y;
//	return temp;
//}


// 정수를 하나 입력한다.
// 입력한 정수에대해 짝수인지 홀수인지 출력하는 함수를 만들기
// 단, 0을 입력하면 에러라고 출력되어야한다.

//int pus(int x) {
//	if (x == 0) {
//		printf("에러");
//	}
//	else if (x % 2 == 0) {
//		printf("짝수");
//	}
//	else {
//		printf("홀수");
//	}
//
//}

// 999999이하의 숫자를 입력하여 입력한 숫자가 몇자리 숫자인지
// 구하여 main함수에서 출력하기

//int min(int num) {
//	int count = 0;
//	while (num != 0) {
//		num /= 10;
//		count++;
//	}
//	return count;
//	
//
//}

//double centiMeter(int x) {
//	double meter = x / 100.0;
//	return meter;
//
//}

//void sum(int count) {
//	int total = 0;
//	for (int i = 1; i <= count; i++) {
//		total+= i;
//	}
//
//	printf("1부터 %d까지 합은 %d입니다\n", count, total);
//}


void main() {

	/*out(1);*/

	/*four(4,1);*/

	/*printf("%d\n" ,fac(5));
	printf("%d\n", ten(10));*/

	/*int kor = 80, eng = 88, mat = 90;
	int tot = total(kor, eng, mat);

	avg(tot);

	int a1 = 10, b1 = 20;
	sum(a1, b1);*/

	//a();

	/*int a = 10, b = 20;
	int result;
	result = sum(a, b);
	printf("결과 : %d", result);*/

	/*int a;
	printf("정수 입력하세요");
	scanf_s("%d", &a);
	pus(a);*/

	/*int c;
	printf("숫자 입력");
	scanf_s("%d", &c);
	int a = min(c);
	printf("결과 %d은 %d자리수이다.",c, a);*/

	/*double res;
	res = centiMeter(187);
	printf("%.2lfm\n", res);*/

	/*sum(10);
	sum(100);*/
	
	

}


//void a() {
//	printf("나는 함수a\n");
//}
//void b() {
//	printf("나는 함수b\n");
//}
//void c() {
//	printf("나는 함수c\n");
//}
//void d() {
//	printf("나는 함수d\n");
//}
//void e() {
//	printf("나는 함수e\n");
//}