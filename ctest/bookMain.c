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
			// ��� �����Ҵ� ���� ���� �ϴ� �ڵ� �ۼ��ϱ�
			printf("�����մϴ�.");
			return;
		}
	}
}
