#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void input(int* p) { // �����Է� �� ¦�� �Է��ϸ� �ٽ� �Է�
	//printf("������ �Է��ϼ���");
	//for (int i = 0; i < 5; i++) {
	//	scanf("%d", &p[i]);

	//	if (p[i] % 2 == 0) {
	//		printf("¦���Է������� �ٽ� �Է��ϼ���:");
	//		scanf("%d", &p[i]);
	//	}
	//}

	/*int* end = p + 5;

	do {
		printf("������ �Է��ϼ���");
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
//	for (int i = 0; i < size - 1; i++) { // �������� - �迭�� ũ�Ⱑ n�̶�� n-1��ŭ �ݺ�
//		for (int k = 0; k < size - 1 - i; k++) { // ���ĵ������� ������ ���� -1��ŭ �ݺ�
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
//		printf("��ȣ�Է�: ");
//		scanf("%d", lotto_nums);
//		for (int* i = start; i != lotto_nums; i++) {
//			if (*i == *lotto_nums) {
//				printf("��ȣ�� ����\n");
//				lotto_nums -= 1; break;
//			}
//		}
//		lotto_nums += 1;
//	}
//}
//
//void print_nums(int* lotto_nums) {
//	printf("�ζǹ�ȣ");
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
	//printf("�ܾ� �Է� : ");
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

	//printf("�Է��� �ܾ� : %s ������ �ܾ� : %s", word, visible);

	char a[10], b[10], c[10];
	char trmp[20];

	printf("�ܾ��Է�");
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

	printf("�ٲ�� �� ���ڿ� : %s\n", str);
	my_strcpy(str, "apple");
	printf("�ٲ� �� ���ڿ� : %s\n", str);
	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));*/


	/*char ani[20];
	char why[80];
	printf("�����ϴ� ���� : ");
	scanf("%s", ani);

	getchar();
	printf("�����ϴ� ���� : ");
	fgets(why, sizeof(why), stdin);
	printf("%s is %s", ani, why);*/


	/*char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);

	printf("�Էµ� ���ڿ��� %s�Դϴ�\n", str);*/


	/*int num, result;
	char word[10];
	printf("�����Է�");
	result = scanf("%d", &num);*/

	/*printf("scanf��ȯ�� :%d\n", result);
	scanf("%s", word);  ���� - getchar(), getch() ���ڿ� - gets() */

	/*getchar();
	gets(word);

	printf("%d\n", num);
	printf("%s\n", word);*/
	


	/*int lotto_nums[6];
	input_nums(lotto_nums);
	print_nums(lotto_nums);*/


	/*int arr[5] = { 0, };
	printf("���� �Է� : ");
	scanf("%d%d%d%d%d", arr, arr + 1, arr + 2, arr + 3, arr + 4);
	sort(arr, sizeof(arr)/ sizeof(int) );
	printf("%d%d%d%d%d", arr[0], arr[1], arr[2], arr[3], arr[4]);*/


	/*double max, mid, min;

	printf("�Ǽ� �� 3�� �Է�");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("���ĵ� �� ��� : %.1lf,%.1lf,%.1lf\n", max, mid, min);*/


	/*int arr[5], sum = 0;
	input(arr );
	total(arr , &sum );
	printf("�Է� �� ������ ������ %d\n", sum);*/


	//int kor = 89, eng = 90, mat = 56;
	//int tot = 0;
	//total(kor, eng, mat, &tot );
	//printf("���� : %d", tot);


	//int num1 = 0, num2 = 0, sum = 0;
	//int* p = NULL, *sump=NULL;

	//p = &num1;
	//printf("ù��° ���� �Է� : ");
	//scanf("%d", p); // num1�� ���� ����, ������ ���
	//p = &num2;
	//printf("�ι�° ���� �Է� : ");
	//scanf("%d", p); // num2�� ���� ����, �����ͻ��

	//sump = &sum;
	//*sump = num1+num2; // sum�� �� ������ �� ����, ������ ���
	//printf("�������� ���� : %d", *sump);


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
	printf("������ - %s\n", str);
	printf("�迭 -%s\n", word);

	printf("������ -%s\n", str + 5);
	printf("�迭 - %s\n", word + 5);

	word[0] = '{';
	printf("�迭 - %s\n", word);

	str[0] = 'a';
	printf("������ - %s\n", str);*/


	// �����ʹ� �޸��ּҸ� �����ϱ� ���� �޸𸮰����̴�.
	// ������ ������ �Ѵ�.
	// �⺻ ������Ÿ�Կ� ������ ���� ������, �����͸� ����
	// ���� �����ϰų� ����ϴ°�쿡�� Ÿ�Կ� ������ �޴´�.
	// ���α׷������� ���Ǵ� �޸��ּҶ�� �����Ϳ� ������ �����ϴ�.

	/*int num = 40;
	char arr[10] = { 0, };*/

	//printf("%d\n", num);
	//printf("%p\n", &num); 
	//printf("%p\n", &num+1);
	//printf("%p\n", arr+1);
	//printf("%p\n", &arr+1);

	//void* p;  // ������(4byte)
	//int* ip;  // ������(4byte)
	//char* cp; // ������(4byte)

	// & - �޸𸮰����� �ּ�, * - �޸��ּ��� ����
	//ip = &num;
	//*ip = 1023; // *&num = 1023  num = 1023;
	//printf("���� num�� �� : %d\n", num);

	// const int* p �ϰ��� �����ͺ����� ����Ű�� ���� ���
	// int* cost p �ϰ��� �����ͺ����� ���� ��� 

	// int* const p �ϰ��� �����ͺ����� ���� ���
	// �����ͺ��� ������ ���(�б����)

	//const int* pp = &num;
	//char num1 = 50;
	//printf("%d\n", *pp);

	//pp = &num1;
	//printf("%d\n", *(char*)pp);
	
	
}


// ���α׷��� ����, ������(�ü��)�� ����