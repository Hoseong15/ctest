#include <stdio.h>
#include <stdlib.h>



// ����Լ� - �ڽ��� �����Ű�� �Լ�




//void out(int num) {
//	printf("%d\n",num);
//	if (num < 10) {
//		out(++num);
//	}
//	return;
//}


// ����Լ��� ������ 4�� ��� �غ�����
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



// c���� �Լ��� ���鶧 main���� �������Ѵ�.

//void a();
//void b();
//void c();
//void d();
//void e();


// �Լ��̸��� �Լ��� ��ɿ� �´� �̸��������Ѵ�. ���̹�ǥ���������
// �Ű������� �Լ��� ������ �����ϴµ� �ܺε����Ͱ� �ʿ��Ѱ�� �����Ѵ�.
// return ��ȯ�� �Լ��� ����ǰ� ���� ��� �������� �ܺο��� ����ؾ� �Ǵ°��
// ��ȯŸ�� �Լ��̸�(�Ű�����)

//void sum(int a, int b) {
//	int add = a+b;
//	printf("�� : %d\n", add);
//}
//
//int total(int k, int e, int m) {
//	int add = k + e + m;
//	printf("������ : %d\n", add);
//	return add;
//}
//
//void avg(int tot) {
//	printf("����� %d\n", tot / 3);
//}


//int sum(int x, int y) {
//	int temp;
//	temp = x + y;
//	return temp;
//}


// ������ �ϳ� �Է��Ѵ�.
// �Է��� ���������� ¦������ Ȧ������ ����ϴ� �Լ��� �����
// ��, 0�� �Է��ϸ� ������� ��µǾ���Ѵ�.

//int pus(int x) {
//	if (x == 0) {
//		printf("����");
//	}
//	else if (x % 2 == 0) {
//		printf("¦��");
//	}
//	else {
//		printf("Ȧ��");
//	}
//
//}

// 999999������ ���ڸ� �Է��Ͽ� �Է��� ���ڰ� ���ڸ� ��������
// ���Ͽ� main�Լ����� ����ϱ�

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
//	printf("1���� %d���� ���� %d�Դϴ�\n", count, total);
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
	printf("��� : %d", result);*/

	/*int a;
	printf("���� �Է��ϼ���");
	scanf_s("%d", &a);
	pus(a);*/

	/*int c;
	printf("���� �Է�");
	scanf_s("%d", &c);
	int a = min(c);
	printf("��� %d�� %d�ڸ����̴�.",c, a);*/

	/*double res;
	res = centiMeter(187);
	printf("%.2lfm\n", res);*/

	/*sum(10);
	sum(100);*/
	
	

}


//void a() {
//	printf("���� �Լ�a\n");
//}
//void b() {
//	printf("���� �Լ�b\n");
//}
//void c() {
//	printf("���� �Լ�c\n");
//}
//void d() {
//	printf("���� �Լ�d\n");
//}
//void e() {
//	printf("���� �Լ�e\n");
//}