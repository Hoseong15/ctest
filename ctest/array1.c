#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void main() {

	char str[100] = "�ѱ۵� �� ����ǰ� ��µǳ�??";
	printf("%s\n", str);
	
	char han[10] = "�����";
	printf("%s\n", han);

	char word[200];
	strcat_s(str, sizeof(str), "��˰�"); // ���ڿ� ����
	strcpy_s(word, sizeof(word), str); // ���ڿ� ����

	printf("%s\n", str);
	printf("%s\n", word);

	int len;
	len = strnlen_s(word, sizeof word);
	printf("%d\n", len); // ���ڿ��� ����
	
	int cmp = 0;
	cmp = strcmp(word, str); //���ڿ� ��
	printf("%d\n", cmp);
	cmp = strcmp("apple", "banana");
	printf("%d\n", cmp);

	cmp = strcmp("banana", "apple");
	printf("%d\n", cmp);

	// ���ڿ� �˻�
	printf("%p\n", strchr("banana", 'n'));

	printf("%d\n", strspn("banana1234", "1234"));
	printf("%d\n", strspn("1234banana", "1234"));

	printf("%s \n", strstr("i like banana", "banana"));
	printf("%s \n", strstr("i like banana", "orange"));

	char name[20];
	printf("�̸� : ");
	//scanf("%s", name); //scanf_s�� ���ڿ��� ���޴´�
	gets(name); // ���ڿ��� ����Ҷ��� gets(���ڿ� ����)�� ����ϸ�ȴ�
	puts(name); // ���ڿ� ���� ���
	puts(strcat(name, "�Դϴ�.")); // ���ڿ� ��ĥ �� ���
	//printf("%s", name);

	// ���� �����
	char ch;
	printf("�����Է� : ");
	//ch = getchar();
	//printf("%c\n", ch);

	ch = getch();
	printf("%c\n", ch);
	putchar(ch);
	putch(ch);
}

// scanf_s("%s", name); -> 1����Ʈ ������ �����ϰڴ�.