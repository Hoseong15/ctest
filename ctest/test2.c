#include <stdio.h>
#include <stdbool.h> // bool

#define p 3.14

void main() {

	// bmi = (ü�� / (Ű(m����)*Ű(m����)))
	
	int kg = 0;
	float cm = 0;
	float bmi = 0;

	printf("������ , Ű�� �Է��ϼ��� : ");
	scanf_s("%d %f", &kg, &cm);
	cm = cm / 100;

	bmi = kg / (cm * cm);

	printf("(%.1f)%s\n", bmi, (bmi >= 20.0 && bmi < 25.0) ? "ǥ��" : "ü�߰��� �ʿ�");






	


	/*int seats = 70, audience = 65;
	double rate = 0;

	rate = (double)audience / seats *100;
	printf("%.1lf%%\n", rate);

	float hour = 3.76;
	int hours = (int)hour;
	float a = hour - hours;
	int min = a * 60;
	int sec = (a * 3600) - (min * 60);
	printf("%.2f �ð��� %d�ð� %d�� %d���Դϴ�.\n", hour, hours, min, sec);*/


	//printf("%d \n", 24 & 19);
	//printf("%d", ~14); //00001110 -> 11110001 -> 0�κи� ���Ѵ� �����κ�ȯ�� ��� ����� ���ڰ� �Ѱ� �� �� ���Ƽ� �ϳ� �� �߰����� -15

	//int num = 14;
	//int res = 0;

	//res = (~num) + 1;
	//printf("%d %d \n", ~num, res);

	//printf("%d\n", 43 ^ 15);

	//printf("%d\n", 4 << 2);  //000100 -> �������� 2ĭ �̵�
	//printf("%d\n", 16 >> 3); //010000 -> ���������� 3ĭ �̵�

	//printf("%d\n", 11 * 9);
	//printf("%d\n", (11 << 3) + 11);

	// ��Ʈ ������ - ��Ʈ ��������, ��Ʈ ����Ʈ ������
	// ��Ʈ �������� - and( & ), or( | ), not( ~ ), xor( ^ )
	// ��Ʈ ����Ʈ������ - left( << ), right( >> ); 
	// �����ʹ���
	// bit - byte - kbyte - mbyte - gbyte - ...
	// bit -> 0, 1 (2����)
	// 1byte(8bit) -> ����, ���ڴ� �ִ� 255���� ����
	// 1kbyte(1024byte) -> ������� ����
	// 1mbyte(1024kbyte) -> mp3���� 1��
	// 1gbyte(1024mbyte) -> HD�� ��ȭ 30������


	//������ ���� �����Ⱑ �ִ�
	// �����⿡ �ڵ� �������� ���� 55�� �����ߴ�.
	// ���� ������ 60�̻�Ǹ� ������� �����ǰ�
	// ������ 50���� �Ǹ� �����Ⱑ �����ȴ�.
	// ���� ������ �Է¹޾� �������� ������ ���
	/*int a = 0;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("%s \n", a >= 60 ? "������ �ߴ�" : a <= 50 ? "������ ����" : "������ �۵���");*/

	



	// (���ǽ�) ? �� : ����;
	/*int result = 0;
	//int a = 0, b = 0;
	//result = (10 > 5) ? 1000 : 55;
	//printf(" %d\n", result);
	//printf("%s\n", (3 > 5) ? "5���� ũ��" : "5���� �۴�");

	//(3 > 5) ? printf("5���� �۴�") : printf("5���� ũ��");
	//(3 > 5) ? scanf_s("%d", &a) : scanf_s("%d", &b);
	//printf("%d %d\n", a, b);*/



	/*int num = 10;
	//float f = 4.53;
	//double dnum = 5.44;
	//char ch = 'r';

	//printf("int�� ������ ũ�� : %d\n", sizeof(num));
	//printf("������ ũ�� : %d\n", sizeof(ch));*/


	// ���� Ʈ���� �������� r�̰�
	// Ʈ������ �ڵ����� �޸���.
	// �ڵ����� �ӵ��� k/h�̴�.
	// �ι����� �����ϴµ� ����� �ɸ��°�?

	/*int r = 0, k = 0;
	const float pi = 3.14;
	int dist = 0;
	float time = 0;

	printf("������ : ");
	scanf_s("%d", &r);

	printf("�ڵ��� �ӵ� : ");
	scanf_s("%d", &k);

	dist = r * 2 * 3.14;

	time = (dist / (float)k) * 60;
	printf("Ʈ���� ����: %dkm \n", dist);
	printf("�ڵ����� �ӵ� : %d \n", k);
	printf("�� ���� ���� : %f�� \n", time);*/


	/*double radius;
	double speed;  
	double time;   

	printf("���� Ʈ���� �������� �Է�: ");
	scanf_s("%lf", &radius);

	printf("�ڵ����� �ӵ��� �Է�: ");
	scanf_s("%lf", &speed);

	speed * 3.14;

	double cir = 2 * 3.141592 * radius;

	time = (cir / speed) * 60;

	time *= 2;

	printf("�� ������ �����ϴµ� �ɸ��� �ð�: %lf��\n", time);*/

	

	//int money = 5300;
	//int ���뱹�� = 6500;
	//int ��������� = 1800;

	//printf("%s \n", (money >= ���뱹��) && (money >= ��������� ) ? "�����" : "������");
	//printf("%d \n", (money >= ���뱹��) || (money >= ���������));
	//printf("%d \n", !(money >= ���뱹��));

	/*int kor = 3, eng = 5, mat = 4;
	int credits = kor + eng + mat;


	float kscore = 3.8;
	float escore = 4.4;
	float mscore = 3.9;
	float grade = (kscore + escore + mscore) / 3;



	printf("%d \n", grade > 4.0 && credits >= 10);*/


	// and(&&), or(||), not(!)
	// and�� �ΰ� �ǿ����ڰ� ��� ���ϰ�쿡�� ��
	// or�� �ΰ� �ǿ����ڰ� ��� �����ϰ�쿡�� ����
	// not�� ����(�� -> ����, ���� -> ��)


	/*bool isMoney = true;
	isMoney = 5 > 6;
	printf(" %s ", isMoney ? "true" : "false");*/
}