#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main() {

	char str[100] = "한글도 잘 저장되고 출력되나??";
	printf("%s\n", str);
	
	char han[10] = "가방방";
	printf("%s\n", han);

	char word[200];
	strcat_s(str, sizeof(str), "김똥개"); // 문자열 복사
	strcpy_s(word, sizeof(word), str); // 문자열 복사

	printf("%s\n", str);
	printf("%s\n", word);

	int len;
	len = strnlen_s(word, sizeof word);
	printf("%d\n", len); // 문자열의 길이
	
	int cmp = 0;
	cmp = strcmp(word, str); //문자열 비교
	printf("%d\n", cmp);
	cmp = strcmp("apple", "banana");
	printf("%d\n", cmp);

	cmp = strcmp("banana", "apple");
	printf("%d\n", cmp);

}