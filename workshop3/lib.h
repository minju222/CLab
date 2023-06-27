#pragma once

typedef struct {
	char name[50];
	int price;
	char author[50];
	char publisher[50];
} Book;

void printBook(Book**);
void insertBook(Book**);
void updateBook(Book**);
void deleteBook(Book**);
void findBook(Book**);

void loadFromFile(Book**);
void saveToFile(Book**);

void freeBooks(Book**);