#include <stdio.h>
#include <stdlib.h>







void main() {


}



//void scoreInput();
//int total(int kor, int eng, int mat);
//float avg(int total);
//void grade(float avg);
//
//int main() {
//    scoreInput();
//}
//
//void scoreInput() {
//    int kor = 0, eng = 0, mat = 0;
//    printf("�� ������ ������ �Է��ϼ���: ");
//    scanf_s("%d %d %d", &kor, &eng, &mat);
//    int totalScore = total(kor, eng, mat);
//    float averageScore = avg(totalScore);
//    grade(averageScore);
//}
//
//int total(int kor, int eng, int mat) {
//    return kor + eng + mat;
//}
//
//float avg(int total) {
//    return (float)total / 3.0;
//}
//
//void grade(float avg) {
//    if (avg >= 90.0) {
//        printf("���� A�Դϴ�.\n");
//    }
//    else if (avg >= 80.0) {
//        printf("���� B�Դϴ�.\n");
//    }
//    else if (avg >= 70.0) {
//        printf("���� C�Դϴ�.\n");
//    }
//    else if (avg >= 60.0) {
//        printf("���� D�Դϴ�.\n");
//    }
//    else {
//        printf("���� F�Դϴ�.\n");
//    }
//
//    char jum = 0;
//    switch (avg/10){
//    case 10:
//    case 9: jum = 'A'; break;
//    case 8: jum = 'B'; break;
//    case 7: jum = 'C'; break;
//    case 6: jum = 'D'; break;
//    default:
//        jum = 'F';
//    }
//    printf("��� : %d��, ���� : %c\n", avg, jum);
//}




// ���̿� ������ �׷��ִ� �κ����� �����ߴ�.
// ������ �׸������� ������ �߽���ǥ, ����������, �ʺ�, ���� �Է�
// �޾� �׸��� �ڵ带 ���弼��
//int posSetX();
//int posSetY();
//int pointSet();
//
//
//void circle(posX, posY, width);
//
//void triangle(posX, posY, width, height);
//
//void rect(posX, posY, width, height);
//
//void draw(posX, posY, point);
//
//void main() {
//	int posX = 0, posY = 0, point = 0;
//	posX = posSetX();
//	posY = posSetY();
//	point = pointSet();
//
//	draw(posX, posY, point); // �׸���� ��������ǥ����� �ϸ�ȴ�.
//}
//
//
//int posSetX(){ // x�� ��ǥ
//	int x = 0;
//	printf("x�� ��ǥ�Է� \n");
//	scanf_s("%d", &x);
//	return x;
//}
//
//int posSetY() {// y�� ��ǥ
//	int y = 0;
//	printf("y�� ��ǥ�Է� \n");
//	scanf_s("%d", &y);
//	return y;
//} 
//
//int pointSet(){ // ������ �Է�
//	int pCnt = 0;
//	printf("������ ������ �Է� \n");
//	scanf_s("%d", &pCnt);
//	return pCnt;
//}
//
//void draw(int posX, int posY,int point){ // �ʺ� ���� �Է¹޾� �׸��� ����
//	int width = 0, height = 0;
//	if (point == 1) {
//		printf("������ �Է� : ");
//		scanf_s("%d",&width);
//	}
//	else {
//		printf("�ʺ� ����:" );
//		scanf_s("%d%d",&width,&height);
//	}
//
//	if (point == 1)
//		circle(posX, posY, width);
//	if (point == 3)
//		triangle(posX, posY, width, height);
//	if(point ==4)
//		rect(posX, posY, width, height);
//} 
//
//// ��
//void circle(posX, posY, width) {
//	printf("(%d,%d)��ǥ���� ������ %d\n", posX, posY, width);
//	printf("�� �׸�����\n");
//}
//// �ﰢ��
//void triangle(posX, posY, width, height) {
//	int p1x = 0, p1y = 0, p2x = 0, p2y = 0, p3x = 0, p3y = 0;
//
//	p1x = posX;
//	p1x = posY - height / 2;
//
//	p2x = posX - width / 2;
//	p2y = posY + height / 2;
//
//	p3x = posX + width / 2;
//	p3y = p2y;
//
//	printf("---(%d,%d)---\n", p1x, p1y);
//	printf("(%d,%d)---(%d,%d)\n", p2x, p2y, p3x, p3y);
//	printf("�ﰢ�� �׸�����\n\n");
//
//}
//// �簢��
//void rect(posX, posY, width, height) {
//	int p1x = 0, p1y = 0, p2x = 0, p2y = 0, p3x = 0, p3y = 0, p4x = 0, p4y = 0;
//
//	p1x = posX - width / 2;
//	p1y = posY - height / 2;
//
//	p2x = posX + width / 2;
//	p2y = posY - height / 2;
//
//	p3x = posX - width / 2;
//	p3y = posY + height / 2;
//
//	p4x = posX + width / 2;
//	p4y = posY + height / 2;
//
//	printf("(%d,%d) - (%d,%d) \n", p1x, p1y, p2x, p2y);
//	printf("(%d,%d) - (%d,%d) \n", p3x, p3y, p4x, p4y);
//	printf("�簢��  �׸�����\n\n");
//}



//int init();
//int up_and_down(int max);
//
//void result(int count);
//
//void main() {
//	int max = init(); // ���� �ִ��������
//	int count = up_and_down(max); // ���ٿ� ���� ����
//	// ���ٿ� �����ϴµ� ���������� ���ڸ� �Է�����������
//	// ��� ���� �����ϸ鼭 count 1000 �ֱ�
//	result(count);
//}
//int init() {
//	int range;
//	printf("�������� : \n");
//	scanf_s("%d", &range);
//	return range;
//}
//
//int up_and_down(int max) {
//	int com = 0, user = 0, count = 0, iMin = 0, iMax = 0;
//	printf("\n\n ======���ӽ���=====\n");
//	com = rand() % max + 1;
//
//	if (!(iMin <= user && iMax >= user)) {
//		return 1000;
//	}
//
//	while (1) {
//		printf("���� �Է� : ");
//		scanf_s("%d", &user);
//		count++;
//
//		if (com == user) {
//			return count;
//		}
//		else if (com > user) {
//			printf("��!");
//			iMin = user + 1;
//		}
//		else if (com < user) {
//			printf("�ٿ�!");
//			iMax = user - 1;
//		}
//	}
//	return 0;
//
//}
//
//void result(int count) {
//	printf("����� %d������ ������ ���½��ϴ�.\n", count);
//
//	if (count > 8)
//		printf("����� �ٽô� ��������������.\n");
//	else if (count > 4)
//		printf("����ϸ� �� �� �ֽ��ϴ�. �ٽ� �����غ�����\n\n");
//	else
//		printf("�̰���ϴ�.\n\n");
//}