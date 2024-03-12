#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void input(int* p) { // 정수입력 시 짝수 입력하면 다시 입력
	//printf("정수를 입력하세여");
	//for (int i = 0; i < 5; i++) {
	//	scanf("%d", &p[i]);

	//	if (p[i] % 2 == 0) {
	//		printf("짝수입력했으니 다시 입력하세요:");
	//		scanf("%d", &p[i]);
	//	}
	//}

	/*int* end = p + 5;

	do {
		printf("정수를 입력하세여");
		scanf("%d", p);
		if( *p % 2 == 1)p += 1;
	} while (end != p);*/
	
//}
//void total(int* p, int* sum) {
//	for (int i = 0; i < 5; i++) {
//		*sum += p[i];
//	}
//}

//void total(int k, int e, int m, int* tot) {
//	*tot = k + e + m;
//	return tot;
//}

//void swap(double* pa, double* pb) {
//	double temp;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//void line_up(double* maxp, double* midp, double* minp) {
//	if (*maxp < *midp) swap(maxp, midp);
//	if (*maxp < *minp) swap(maxp, minp);
//	if (*midp < *minp) swap(midp, minp);
//}

//void sort(int* parr, int size) {
//	for (int i = 0; i < size - 1; i++) { // 버블정렬 - 배열의 크기가 n이라면 n-1만큼 반복
//		for (int k = 0; k < size - 1 - i; k++) { // 정렬되지않은 데이터 갯수 -1만큼 반복
//			if (parr[k] - parr[k + 1] > 0) {
//				int temp = parr[k];
//				parr[k] = parr[k + 1];
//				parr[k + 1] = temp;
//			}
//		}
//	}
//}

//void input_nums(int* lotto_nums) {
//	int* start = lotto_nums;
//	int* end = lotto_nums + 6;
//
//	while (end != lotto_nums) {
//		printf("번호입력: ");
//		scanf("%d", lotto_nums);
//		for (int* i = start; i != lotto_nums; i++) {
//			if (*i == *lotto_nums) {
//				printf("번호가 같음\n");
//				lotto_nums -= 1; break;
//			}
//		}
//		lotto_nums += 1;
//	}
//}
//
//void print_nums(int* lotto_nums) {
//	printf("로또번호");
//	for (int i = 0; i < 6; i++) {
//		printf("%d", lotto_nums[i]);
//	}
//	puts("");
//}

//char *my_strcpy(char *pd, char *ps) {
//	char *po = pd;
//	while (*ps != '\0') {
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//	*pd = '\0';
//	return po;
//}

void main() {

	//char word[16], visible[16];
	//int size = sizeof(word) / sizeof(char);
	//printf("단어 입력 : ");
	////fgets(word, size - 1 , stdin);
	////printf("%s", word);
	//gets(word);

	//strncpy(visible, word, 5);
	//visible[5] = NULL;
	//if (strlen(word) > 5) {
	//	for (int i = 5; i < strlen(word); i++) {
	//		strcat(visible, "*");
	//	}
	//}

	//printf("입력한 단어 : %s 생략한 단어 : %s", word, visible);

	char a[10], b[10], c[10];
	char trmp[20];

	printf("단어입력");
	scanf("%s %s %s\n", a, b, c);
	if (strcmp(a, c) > 0 ) {
		strcpy(trmp, a);
		strcpy(a, c);
		strcpy(c, trmp);
	}
	if (strcmp(b, c) > 0) {
		strcpy(trmp, b);
		strcpy(b, c);
		strcpy(c, trmp);
	}

	printf("%s %s %s\n", a, b, c);
	


	


	/*char str[80] = "strawberry";

	printf("바뀌기 전 문자열 : %s\n", str);
	my_strcpy(str, "apple");
	printf("바꾼 후 문자열 : %s\n", str);
	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));*/


	/*char ani[20];
	char why[80];
	printf("좋아하는 동물 : ");
	scanf("%s", ani);

	getchar();
	printf("좋아하는 이유 : ");
	fgets(why, sizeof(why), stdin);
	printf("%s is %s", ani, why);*/


	/*char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);

	printf("입력된 문자열은 %s입니다\n", str);*/


	/*int num, result;
	char word[10];
	printf("정수입력");
	result = scanf("%d", &num);*/

	/*printf("scanf반환값 :%d\n", result);
	scanf("%s", word);  문자 - getchar(), getch() 문자열 - gets() */

	/*getchar();
	gets(word);

	printf("%d\n", num);
	printf("%s\n", word);*/
	


	/*int lotto_nums[6];
	input_nums(lotto_nums);
	print_nums(lotto_nums);*/


	/*int arr[5] = { 0, };
	printf("정수 입력 : ");
	scanf("%d%d%d%d%d", arr, arr + 1, arr + 2, arr + 3, arr + 4);
	sort(arr, sizeof(arr)/ sizeof(int) );
	printf("%d%d%d%d%d", arr[0], arr[1], arr[2], arr[3], arr[4]);*/


	/*double max, mid, min;

	printf("실수 값 3개 입력");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf,%.1lf,%.1lf\n", max, mid, min);*/


	/*int arr[5], sum = 0;
	input(arr );
	total(arr , &sum );
	printf("입력 한 정수의 총합은 %d\n", sum);*/


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