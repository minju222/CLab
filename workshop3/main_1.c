#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"


extern  int index;
extern  int N;
extern Book* boos;

void printBook(Book** books) { //(Book* books[10]) �� ����
	if (index == 0) {
		printf("����� å�� �����ϴ�.");
	}
	for (int i = 0; i < index; i++) {
		printf("[%d] %s %d %s %s\n", i, books[i]->name, books[i]->price, books[i]->author, books[i]->publisher);
	}
}

void findBook(Book** books) {
	printf("ã�� å �̸��� �Է��ϼ���\n");
	char book[50];
	scanf("%s", book);
	for (int i = 0; i < index; i++) {
		int check = -1;
		check = strcmp(book, books[i]->name);
		if (check == 0) {
			printf("[%d] %s %d %s %s\n", i, books[i]->name, books[i]->price, books[i]->author, books[i]->publisher);
			break;
		}
	}
}

void insertBook(Book** books) {
	if (index == N) {
		books = realloc(books, sizeof(Book*) * N * 2);
		N *= 2;
	}

	books[index] = (Book*)malloc(sizeof(Book));

	printf("å�̸��� �Է��ϼ���\n");
	scanf("%s", books[index]->name);
	printf("å������ �Է��ϼ���\n");
	scanf("%d", &books[index]->price);
	printf("å���ڸ� �Է��ϼ���\n");
	scanf("%s", books[index]->author);
	printf("å���ǻ縦 �Է��ϼ���\n");
	scanf("%s", books[index]->publisher);
	index++;


}

void updateBook(Book** books){
	printf("������ å �̸��� �Է��ϼ���\n");
	char book[50];
	scanf("%s", book);

	int d_index = -1;

	for (int i = 0; i < index; i++) {
		int check = -1;
		check = strcmp(books[i]->name, book);
		if (check == 0) {
			d_index = i;
			break;
		}
	}

	if (d_index == -1) {
		printf("�ش��ϴ� å�� �����ϴ�.\n");
	}
	else {
		printf("���ο� å �̸��� �Է��ϼ���\n");
		scanf("%s", books[d_index]->name);
		printf("���ο� å ������ �Է��ϼ���\n");
		scanf("%d", &books[d_index]->price);
		printf("���ο� å ���ڸ� �Է��ϼ���\n");
		scanf("%s", books[d_index]->author);
		printf("���ο� å ���ǻ縦 �Է��ϼ���\n");
		scanf("%s", books[d_index]->publisher);

	}
}

void deleteBook(Book** books) {
	printf("������ å �̸��� �Է��ϼ���\n");
	char book[50];
	scanf("%s", book);

	int d_index = -1;

	for (int i = 0; i < index; i++) {
		int check = -1;
		check = strcmp(books[i]->name, book);
		if (check == 0) {
			d_index = i;
			break;
		}
	}

	if (d_index == -1) {
		printf("�ش��ϴ� å�� �����ϴ�.\n");
	}
	else {
		strcpy(books[d_index]->name, books[index - 1]->name);
		books[d_index]->price = books[index - 1]->price;
		strcpy(books[d_index]->author, books[index - 1]->author);
		strcpy(books[d_index]->publisher, books[index - 1]->publisher);
		free(books[index - 1]);
	}
	index--;
}

void saveToFile(Book** books) {
	int i;
	FILE* fd = fopen("book.text", "w");
	if (fd == NULL) {
		printf("File ���� ����\n");
		return;
	}
	for (i = 0; i < index; i++) {
		fprintf(fd, "%s %d %s %s\n", books[i]->name, books[i]->price, books[i]->author, books[i]->publisher);
	}
	fclose(fd);
};


void loadFromFile(Book** books) {
	int res = 0;

	FILE* fd = fopen("book.txt", "r");
	if (fd == NULL) {
		printf("File ���⿡ �����߽��ϴ�\n");
		fflush(stdout);
		return;
	}

	while (1) {
		Book* pb = (Book*)malloc(sizeof(Book));
		res = fscanf(fd, "%s %d %s %s", pb->name, &pb->price,
			pb->author, pb->publisher);
		if (res == EOF) {
			break;
		}
		books[index] = pb;
		index++;

	}
	fclose(fd);
};


void freeBooks(Book** books) {
	int i;
	for (size_t i = 0; i < index; i++){	
		free(books[i]);
	}
};
