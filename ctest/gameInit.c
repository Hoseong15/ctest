#include "card.h"


static void make_card(); // 카드 생성
static void player_set(); // 플레이어 설정



void start() {
	printf("\x1b[31;1m"); printf("\x1b[43m");
	printf("블랙잭 게임에 오신걸 환영합니다.\n");
	printf("\x1b[32m"); printf("\x1b[47m");
	printf("모든 참가자를 이기면 456억을 획득하게 됩니다.\n");
	printf("\x1b[0m");

	init();
	//board();
	play(); // 게임 시작
}


void init() {
	load(); // 파일 불러오기
	make_card();
	player_set();
}


void board() {
	Sleep(2000);
	system("cls");
	printf("참가자 : %d명\n", playerCnt);
}


void make_card() {
	card = (Card*)malloc(sizeof(Card) * 52);
	for (int i = 0; i < 4; i++) {
		for (int k = 0; k< 13; k++) {
			card[i * 13 + k].number = k + 1;
			card[i * 13 + k].shape = i;
		}
	}
}

void player_set() {
	int numbers , mynum=0;
	
	printf("\n참가인원 설정 (최대4명): ");
	scanf("%d", &numbers);
	getchar(); // 엔터 추출
	if (player != NULL) {
		if (player[playerCnt - 1].num + (numbers - playerCnt) > 456) {
			printf("456명까지만 참여 가능합니다. 마지막 게임의 참가자수를 조정합니다.\n");
			printf("마지막 게임 참가자수 : %d명", playerCnt + 456 - player[playerCnt - 1].num);
			numbers = playerCnt + 456 - player[playerCnt - 1].num;
		}
	}

	if (playerCnt < numbers) { // 기존 참가자수보다 설정인원이 큰 경우(파산 참가자 자동 제외)
		if (player == NULL) {
			player = (Player*)malloc(sizeof(Player));
			player[playerCnt].num = 1;
			player[playerCnt].money.cash = 500000;
			player[playerCnt].money.lost = 0;
			player[playerCnt].money.win = 0;
			player[playerCnt].score = 0;
			player[playerCnt].stay = 0;
			player[playerCnt].betting = 0;
			playerCnt++;
		}
		// 새 참가자 설정
		for (int i = playerCnt != 0 ? playerCnt : 1; i < numbers; i++) {
			player = (Player*)realloc(player, sizeof(Player) * (i + 1));
			player[i].num = player[i-1].num+1;
			player[i].money.cash = 500000;
			player[i].money.lost = 0;
			player[i].money.win = 0;
			player[i].score = 0;
			player[playerCnt].stay = 0;
			player[playerCnt].betting = 0;
			playerCnt++;
		}
	}
	for (int i = 0; i < playerCnt; i++) {
		for (int k = 0; k < 8; k++) {
			player[i].player_card[k] = NULL;
		}
	}

}