#include <stdio.h> 
//#include "aa .h"  Ŀ����

//void main() {
//	/*printf("ù c �׽�Ʈ");
//	printf("���� ����ϰ������ @#!\\%%^&* �ƹ��ų� �Է�"); */
//	// %,\�� Ư���� ����� �־ ����� �Ϸ��� �ι� �Է��ؾ��Ѵ�.
//	
//	int age = 25;
//	printf("�� ���̴� %d�Դϴ�.\n",age);
//
//	printf("�� Ű�� %.1fcm �̰�, �����Դ� %dkg��\n", 180.3, 78);
//
//	printf("%d�� %d�� ������ %.1f�Դϴ�.\n", 1, 2, 0.5);
//
//	printf("%s \n", "��");
//	printf("%d \n", 'a');
//	
//	printf("R�� ���ĺ����� %d��°�� �ֽ��ϴ�", 'R' - 'A' + 1);
//
//}

char main() {
	int birth = 19990101;
	short age = 25;
	unsigned char ch = 69;
	//unsigned ������ ���ڸ� ��������� ���� -> 255���� ����
	int result = 0;
	printf(" %d  %d  %d \n", birth, age, ch);

	ch = 130;
	printf("%d  %c \n", ch, ch);
	// char�� -128~127���� ���� 127���� 130���� 3ĭ�̵� -> �ڷ� 3ĭ�̵� -> -128-> -127 -> -126���´�
	result = ch + age;
	printf("��� %d\n", result);
	


}




/*

	������ Ÿ��
		������ - int(4), long(8), short(2), char(1)

		�Ǽ��� - float(4), double(8), longdouble(8)

		������ - char(1) 

		void - �Լ��� �޼����� ��ȯ���� �������� �ʴ� �ǹ̷� ���



	���� ������(8������ �� �˾Ƶξ����)

	%d - 10���� ���� -> int, short
	%ld - 10���� ���� -> long
	%f - 10���� �Ǽ� -> float, double
	%lf - 10���� �Ǽ� -> double
	%c - ���� -> char
	%s - ���ڿ� -> char*
	%p - �޸��ּ� -> void*

	%o - 8���� -> int
	%x - 16���� -> int
	%u - ��ȣ���� 10���� -> unsigned int

*/