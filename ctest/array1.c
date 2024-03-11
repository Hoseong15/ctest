#define _CRT_SECURE_NO_WARNINGS
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

	// 문자열 검색
	printf("%p\n", strchr("banana", 'n'));

	printf("%d\n", strspn("banana1234", "1234"));
	printf("%d\n", strspn("1234banana", "1234"));

	printf("%s \n", strstr("i like banana", "banana"));
	printf("%s \n", strstr("i like banana", "orange"));

	char name[20];
	printf("이름 : ");
	//scanf("%s", name); //scanf_s은 문자열을 못받는다
	gets(name); // 문자열을 사용할때는 gets(문자열 전용)을 사용하면된다
	puts(name); // 문자열 전용 출력
	puts(strcat(name, "입니다.")); // 문자열 합칠 떄 사용
	//printf("%s", name);

	// 문자 입출력
	char ch;
	printf("문자입력 : ");
	//ch = getchar();
	//printf("%c\n", ch);

	ch = getch();
	printf("%c\n", ch);
	putchar(ch);
	putch(ch);
}

// scanf_s("%s", name); -> 1바이트 공간에 저장하겠다.