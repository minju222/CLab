#pragma once

typedef struct {
	char name[50];
	int price;
	char author[50];
	char publisher[50];
}Book;

void printBook(Book books[10]); //도서조회
void insertBook(Book books[10]); //도서입력
void updateBook(Book books[10]); //도서수정
void deleteBook(Book books[10]); //도서삭제
void findBook(Book books[10]); //도서검색