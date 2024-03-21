#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <Windows.h>

#define dealerMax 17
#define spade "��"
#define club "��"
#define dia "��"
#define heart "��"

enum Shape { SPADE, CLUB, DIA, HEART };
enum num { ACE = 1, JACK = 11, QUEEN = 12, KING = 13 };

typedef struct Card {
	int number; // ī���ȣ
	enum Shape shape; // ī����
}Card;

typedef struct Money {
	int cash; // ���� �ݾ�
	int lost; // ���� �� �ݾ�
	int win; // ���� �� �ݾ�
}Money;

typedef struct Player {
	int stay; 
	int num; // �÷��̾� ������ȣ
	int score; // �÷��̾��� ���� ����
	int betting; // ���⵷
	struct Money money; // �÷��̾� �ݾ�
	struct Card *player_card[8]; // �÷��̾� ���� ���� ī��
}Player;

// ��������
Card *card; // 52���� �����Ҵ�
Player *player; // ������ �ο� �� ��ŭ �����Ҵ�
int playerCnt; // ������ �� �ο���

//�Լ����

// gameInit.c
void start(); // ī����� ���� - initȣ��, boardȣ��, playȣ��
void init(); // �ʱ⼳��-52�� ī�� ����, ������ ����, ���Ϸε�
void board(); // ���� �� �׸���

//blackJackFile.c - ���ϸ�  blackJList.c
void load(); 
void save(); 
//player����ü�� num�� money���� ����, �ҷ�����

//blackJack.c
void play(); // ���ӽ���
void gotoxy(int x, int y);


//handOut.c
void dealer_card(); // ����ī�� ���
void shuffle(); // ī�� ����
void deal(); // ī�� ���
void betting(); // ����
int stayOrHit(int turn); // �÷��̾� �Ͽ� �߰� ī�� ����������
void dealer(int turn); // ���� ��
int endGame();

//cardDraw.c
void drawCard(int num, int shape); // ī�� �׸��� - ���常 ȭ�鿡 �׸���
