#pragma once
typedef struct {
	char id[50];
	char name[20];
	int price;
} Product;

void printProduct(Product**);
void addProduct(Product**);
void updateBook(Product**);
void deleteProduct(Product**);
void findProduct(Product**);

void loadFromFile(Product**);
void savetoFile(Product**);