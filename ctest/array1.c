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

}