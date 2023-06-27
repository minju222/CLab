#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"


int index = 0;

//void func(void(*fp)(char [10][50], int [10]), char name[10][50], int price[10]) {
//	fp(name, price);
//}

void func(void(*fp)(Book books[10]), Book books[10]) {
	fp(books);
}

int main() {
	char name[10][50];
	int price[10];
	Book books[10];

	while (1) {
		int menu = 0;
		printf("1: 목록, 2: 도서명검색, 3: 입력, 4: 수정, 5: 삭제, 0: 종료\n");
		scanf("%d", &menu);
		switch (menu) {
		case 1:
			func(printBook, books);
			break;
		case 2:
			//findBook(name, price);
			func(findBook, books);
			break;
		case 3:
			// insertBook(name, price);
			func(insertBook, books);
			break;
		case 4:
			// updateBook(name, price);
			func(updateBook, books);
			break;
		case 5:
			//deleteBook(name, price);
			func(deleteBook, books);
			break;
		case 0:
			printf("프로그램이 종료되었습니다\n");
			exit(0);
			break;
		default:
			break;
		}
	}

	return 0;
}




