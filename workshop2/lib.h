#pragma once

typedef struct {
	char name[50];
	int price;
	char author[50];
	char publisher[50];
}Book;

void printBook(Book books[10]); //������ȸ
void insertBook(Book books[10]); //�����Է�
void updateBook(Book books[10]); //��������
void deleteBook(Book books[10]); //��������
void findBook(Book books[10]); //�����˻�