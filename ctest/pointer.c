#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input(int* p) { // 정수입력 시 짝수 입력하면 다시 입력
	printf("정수를 입력하세여");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &p[i]);

		if (p[i] % 2 == 0) {
			printf("짝수입력했으니 다시 입력하세요:");
			scanf("%d", &p[i]);
		}
	}
	
}
void total(int* p, int* sum) {
	for (int i = 0; i < 5; i++) {
		*sum += p[i];
	}
}

//void total(int k, int e, int m, int* tot) {
//	*tot = k + e + m;
//	return tot;
//}

void main() {


	int arr[5], sum = 0;
	input(arr );
	total(arr , &sum );
	printf("입력 한 정수의 총합은 %d\n", sum);


	//int kor = 89, eng = 90, mat = 56;
	//int tot = 0;
	//total(kor, eng, mat, &tot );
	//printf("총합 : %d", tot);


	//int num1 = 0, num2 = 0, sum = 0;
	//int* p = NULL, *sump=NULL;

	//p = &num1;
	//printf("첫번째 정수 입력 : ");
	//scanf("%d", p); // num1에 정수 저장, 포인터 사용
	//p = &num2;
	//printf("두번째 정수 입력 : ");
	//scanf("%d", p); // num2에 정수 저장, 포인터사용

	//sump = &sum;
	//*sump = num1+num2; // sum에 두 정수의 합 저장, 포인터 사용
	//printf("두정수의 합은 : %d", *sump);


	/*int num = 20;
	int* p = &num;

	printf("%d\n", *p);

	int arr[] = { 10,20,30,40,50 };
	int* arrp = arr+2;
	printf("%d %d \n", arrp[0], arrp[2]);
	arrp[0] = 1020;
	printf("%d\n", arr[2]);


	char word[50] = { "I Love New York" };
	char* wordp = word;
	printf("%s\n", wordp);
	word[5] = 'c';
	printf("%s\n", word);

	char* str = "Today is monday what the hell";
	printf("포인터 - %s\n", str);
	printf("배열 -%s\n", word);

	printf("포인터 -%s\n", str + 5);
	printf("배열 - %s\n", word + 5);

	word[0] = '{';
	printf("배열 - %s\n", word);

	str[0] = 'a';
	printf("포인터 - %s\n", str);*/


	// 포인터는 메모리주소를 저장하기 위한 메모리공간이다.
	// 참조의 역할을 한다.
	// 기본 데이터타입에 영향을 받지 않지만, 포인터를 통해
	// 값을 저장하거나 출력하는경우에는 타입에 영향을 받는다.
	// 프로그램내에서 사용되는 메모리주소라면 포인터에 저장이 가능하다.

	/*int num = 40;
	char arr[10] = { 0, };*/

	//printf("%d\n", num);
	//printf("%p\n", &num); 
	//printf("%p\n", &num+1);
	//printf("%p\n", arr+1);
	//printf("%p\n", &arr+1);

	//void* p;  // 포인터(4byte)
	//int* ip;  // 포인터(4byte)
	//char* cp; // 포인터(4byte)

	// & - 메모리공간의 주소, * - 메모리주소의 공간
	//ip = &num;
	//*ip = 1023; // *&num = 1023  num = 1023;
	//printf("변수 num의 값 : %d\n", num);

	// const int* p 일경우는 포인터변수가 가르키는 값에 상수
	// int* cost p 일경우는 포인터변수에 대해 상수 

	// int* const p 일경우는 포인터변수에 대해 상수
	// 포인터변수 공간에 상수(읽기권한)

	//const int* pp = &num;
	//char num1 = 50;
	//printf("%d\n", *pp);

	//pp = &num1;
	//printf("%d\n", *(char*)pp);
	
	
}


// 프로그램의 접근, 윈도우(운영체제)의 접근