#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {





	// song �迭�� ���� ���ĺ��� ������ ���Ͽ� ����Ͻÿ�.
	/*char song[100] = "school bells ringing ding ding dong lets all gather now";
	int alp[26] = { 0, };

	for (int i = 0; song[i] != NULL; i++) {
		alp[song[i]-97]++;
	}
	for (int k = 0; k < sizeof(alp) / sizeof(int); k++) {
		printf("%c - %d��\n", 97 + k, alp[k]);
	}
	
	for (int i = 0; song[i] != NULL; i++) {
		if (song[i] >= 97 && song[i] < 122) {
			song[i] = song[i] - 32;
		}
	}
	printf("%s\n", song);*/


	// ���� �� ������ ����ϰ�, ������ ��� ������ ����ϼ���.
	/*char birth[100] = "1998��12��09��";
	char year[5];

	
	for (int i = 0; i < 4; i++) {
		year[i] = birth[i];
	}*/


	//char word[100] = "it was just like a movie, it was just like a song";
	//���ĺ� a�� ����� ����
	//int cnt = 0;
	
	/*for (int i = 0; i < sizeof(word) / sizeof(char); i++) {
		if (word[i] == 'a')
			cnt++;
	}*/

	//for (int i = 0; word[i] != NULL; i++) {
	//	if (word[i] == 'a')
	//		cnt++;
	//}
	//printf("���ĺ� a�� %d��\n", cnt);

	// it was just like a movie ���ڿ��� �����Ϸ���
	
	//int idx = 0;
	//char temp[100];
	//char tmp[6] = "movie";

	////movie�� ã�Ƽ� ����ϱ�
	//int cmpCount = 0;
	//for (int i = 0; word[i] != NULL; i++) {
	//	if (word[i] == tmp[0]) {
	//		for (int k = 0; tmp[k] != NULL; k++) {
	//			if (word[i+k] == tmp[k]) {
	//				cmpCount++;
	//			}
	//		}
	//		if (cmpCount == strlen(tmp)) {
	//			idx = i + strlen(tmp);
	//		}
	//	}
	//}
	//if (idx != 0) {
	//	for (int i = 0; i < idx; i++) {
	//		temp[i] = word[i];
	//	}
	//	temp[idx] = NULL;
	//	puts(temp);
	//}
	//else {
	//	printf("������ ���ڿ��� ����.");
	//}
	



	// , ��ã��

	//int from = 0, to = 0 ;
	//for (int i = 0; word[i] != NULL; i++) {
	//	if (word[i] == ',') {
	//		to = i; break;
	//	}
	//}
	//for (int i = from; i < to; i++) {
	//	temp[i] = word[i];
	//}
	//temp[to] = NULL;
	//puts(temp);


	/* 1��
	for (int i = 0; word[i] != NULL; i++) {
		if (word[i] == ',') {
			idx = i; break;
		}
	}
	for (int i = 0; word[i] != NULL; i++) {
		if (i != idx) {
			temp[i] = word[i];
		}
		else break;
	}
	temp[idx] = NULL;
	printf("%s\n", temp);*/
	

	// 1���� ������
	// for (int i = 0; word[i] != NULL; i++) {
	//	if (word[i] != ',') {
	//		temp[i] = word[i];
	//	}
	//	else {
	//		temp[i] = NULL; break;
	//	}
	//}
	//printf("%s\n", temp);
}