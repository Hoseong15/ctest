#include "book.h"

void main() {
	list = file_load();
	while (1) {
		system("cls");

		switch (main_menu()) {
		case SEARCH:
			book_search(list); break;
		case RESISTRATION:
			book_registration(list); break;
		case BOOKRENT:
			rent_book(list); break;
		case BOOKRETURN:
			return_book(list); break;
		default:
			// 모든 동적할당 공간 해제 하는 코드 작성하기
			printf("종료합니다.");
			return;
		}
	}
}
