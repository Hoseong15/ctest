#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input(int* p) { // �����Է� �� ¦�� �Է��ϸ� �ٽ� �Է�
	printf("������ �Է��ϼ���");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &p[i]);

		if (p[i] % 2 == 0) {
			printf("¦���Է������� �ٽ� �Է��ϼ���:");
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
	printf("�Է� �� ������ ������ %d\n", sum);


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