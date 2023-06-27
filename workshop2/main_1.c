#include "lib.h"
extern index;

void printBook(Book books[10]) {
	if (index == 0) {
		printf("저장된 책이 없습니다.");
	}
	for (int i = 0; i < index; i++) {
		printf("[%d] %s %d %s %s\n", i, books[i].name, books[i].price, books[i].author, books[i].publisher);
	}
}

void findBook(Book books[10]) {
	printf("찾을 책 이름을 입력하세요\n");
	char book[50];
	scanf("%s", book);
	for (int i = 0; i < index; i++) {
		int check = -1;
		check = strcmp(book, books[i].name);
		if (check == 0) {
			printf("[%d] %s %d %s %s\n", i, books[i].name, books[i].price,books[i].author, books[i].publisher);
			break;
		}
	}
}

void insertBook(Book books[10]) {
	printf("책 이름을 입력하세요\n");
	scanf("%s", books[index].name);
	printf("책 가격을 입력하세요\n");
	scanf("%d", &books[index].price);
	printf("책 저자를 입력하세요\n");
	scanf("%s", books[index].author);
	printf("책 출판사를 입력하세요\n");
	scanf("%s", books[index].publisher);
	index++;
}

void updateBook(Book books[10]) {
	printf("수정할 책 이름을 입력하세요\n");
	char book[50];
	scanf("%s", book);

	int d_index = -1;

	for (int i = 0; i < index; i++) {
		int check = -1;
		check = strcmp(books[i].name, book);
		if (check == 0) {
			d_index = i;
			break;
		}
	}

	if (d_index == -1) {
		printf("해당하는 책이 없습니다.\n");
	}
	else {
		printf("새로운 책 이름을 입력하세요\n");
		scanf("%s", books[d_index]);
		printf("새로운 책 가격을 입력하세요\n");
		scanf("%d", &books[d_index].price);
		printf("새로운 책 저자를 입력하세요\n");
		scanf("%s", books[d_index].author);
		printf("새로운 책 출판사를 입력하세요\n");
		scanf("%s", books[d_index].publisher);

	}
}

void deleteBook(Book books[10]) {
	printf("삭제할 책 이름을 입력하세요\n");
	char book[50];
	scanf("%s", book);

	int d_index = -1;

	for (int i = 0; i < index; i++) {
		int check = -1;
		check = strcmp(books[i].name, book);
		if (check == 0) {
			d_index = i;
			break;
		}
	}

	if (d_index == -1) {
		printf("해당하는 책이 없습니다.\n");
	}
	else {
		strcpy(books[d_index].name, books[index - 1].name);
		books[d_index].price = books[index - 1].price;
		strcpy(books[d_index].author, books[index - 1].author);
		strcpy(books[d_index].publisher, books[index - 1].publisher);
	}
	index--;
}