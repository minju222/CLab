#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"


int index = 0;
int N = 1;

//void func(void(*fp)(char [10][50], int [10]), char name[10][50], int price[10]) {
//	fp(name, price);
//}

//void func(void(*fp)(Book* books[10]), Book* books[10]) {
//	fp(books);
//}

void func(void (*fp)(Book**), Book** books) {
	fp(books);
}

int main() {
	//char name[10][50];
	//int price[10];
	//insertBook에서 구현: 구조체 포인터 생성( 각 요소값을 malloc을 이용하여 생성하고 저장하는 형태로 변환)
	//deleteBook에서 구현: 구조체 포인터가 가르키고 있는 구조체들의 메모리 해제
	Book* books = malloc(sizeof(Book) * N);
	loadFromFile(books);

	while (1) {
		int menu = 0;
		printf("1:목록, 2:도서명검색, 3:입력, 4:수정,5:삭제, 0:종료\n");
		scanf("%d", &menu);
		switch (menu) {
		case 1:
			func(printBook, books);
			break;
		case 2:
			func(findBook, books);
			break;
		case 3:
			func(insertBook, books);
			break;
		case 4:
			func(updateBook, books);
			break;
		case 5:
			func(deleteBook, books);
			break;
		case 0:
			printf("���α׷��� ����Ǿ����ϴ�\n");
			saveToFile(books);
			freeBooks(books);
			exit(0);
			break;
		default:
			break;
		}

	}

	return 0;
}




