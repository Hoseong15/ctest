#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


typedef struct test {
	int num;
	char name[20];
	int kor, eng, mat, tot;
	float avg;
	char grade;
}test;

void calc_data(test* std);
void print_data(test* std);
void sort(test* a);

void main() {
	test* std = (test*)malloc(sizeof(test) * 5);
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			printf("�й�");
			scanf("%d", &std[i].num);
			getchar();
			printf("�̸�");
			scanf("%s", std[i].name);
			printf("����,����,�������� :");
			scanf("%d %d %d", &std[i].kor, &std[i].eng, &std[i].mat);
			calc_data(std + 1);
		}
	}
	print_data(std);
	sort(a);
}

void calc_data(test* student) {
	student->tot = student->kor + student->eng + student->mat;
	student->avg = student->tot / 3.0;
		if (student->avg >= 90)student->grade = 'A';
		else if (student->avg >= 80)student->grade = 'B';
		else if (student->avg >= 70)student->grade = 'C';
		else student->grade = 'F';
}

void sort(test* a) {
	test temp;
	int max;
	for (int i = 0; i < 5; i++) {
		max = i;
		for (int k = 0; k < 5; k++) {
			if (a[max].tot < a[k].tot) {
				max = k;
			}
		}
		if (max != i) {
			temp = a[max];
			a[max] = a[i];
			a[i] = temp;
		}
	}
	
}

void print_data(test* std) {
	for(int i=0; i<5;i++){
		printf("%5d %7s %5d %5d %5d %5d %3.1f %5c\n", std->num, std->name, std->kor, std->eng, std->mat, std->tot, std->avg, std->grade);
	}
}



/*
	�������� n1����ŭ �ݺ��� n-1�� �ݺ�, n�� ������ �� ����
	for(int i=0; i<n-1; i++){
		for(int k=0; k<n-i; k++{
			if(){������ �ε����� ��ȯ}
		}
	}



*/