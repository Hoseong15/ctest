#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {

	// ������ �����̵� ������ ����� �ִ� ��ȫ
	// ����Ű�� ��(w) �Ʒ�(s) ����(a), ������(d)
	// ����(k), ����(1) �� ����ϰ��� �Ѵ�.
	// Ű���� ���ۿ� ���� ���� �� ������ printf�� ����ϼ���
	// ������Ű�� �ƴ� Ű�� �����ҽÿ� �ƹ��͵� ������� �ʴ´�

	char move;
	printf("���ӽ���!");
	scanf("%c", &move);

	switch (move){
	case 'w' :{printf("���� �̵�"); break;}
	case 's': {printf("�Ʒ��� �̵�"); break;}
	case 'a': {printf("�������� �̵�"); break;}
	case 'd': {printf("���������� �̵�"); break;}
	case 'k': {printf("����!"); break;}
	case '1': {printf("����"); break;}
	}
	





	// switch ~ case ��
	// case�� ���� �� ���� ���� ���۵Ǵ� ���ǹ��̴�.

	/*int c=0, d=0, res = 0;
	char result;
	printf("��Ģ���� ����");
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
		printf("�߸��� ������");
	}
	printf("%d%c%d=%d\n", c, result, d, res);*/

	/*int a, b;
	char c;
	scanf("%d%c%d", &a, &c, &b);
	printf("%c %d %d", c, a, b);



	int num = 1;
	switch (num){
		case 1:
			printf("���� ����");
			break;
		case 2:
			printf("���� ����");
			break;
		case 3:
			printf("���α׷� ����");
			break;
		default:
			printf("�߸��� �����Դϴ�.");
	}*/
	






	// �μ��� �����Ͽ��ٰ� ���� ���Դ�.
	// �Ź��忡 ���۰��� ������ ���� 
	// ���� ���Դٴ°� �����ߴ�.
	// ���� �µ��� 19����� 3�� ���� 22���α���
	// �µ��� �÷��ְ� ������ ���ߴ� ���Ϸ� �ý����̶��
	// �μ��� ���� ��� ������� ���� ������ �µ��� �����Ͽ� 3��
	// ���� �µ����� �÷��ִ� ���Ϸ��� ���۽�Ű����.
	// ���οµ��� 25����� ���Ϸ� ��������
	// 1. �μ��� ���� ���Դ°�? (1- ����, 2-�ȵ���)
	// 2. ���� �� �µ��� ?

	//int home, temp;
	//printf("�μ��� ���� ���Գ�? (1-����, 2-�ȵ���): ");
	//scanf_s("%d", &home);

	//if (home == 1) {
	//	printf("���� �� �µ��� �?");
	//	scanf_s("%d", &temp);
	//	if (temp >= 25) {
	//		printf("��������");
	//	}
	//	else {
	//		printf("���� �� �µ��� %d, �����µ� %d", temp, temp + 3);
	//	}
	//}
	//else {
	//	printf("���Ϸ� OFF");
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
		printf("���ǽ��� ���̶�� ����");
	}
	else if(5 < 1) {
		printf("���ǽ��� �����϶� ����");
	}*/

}