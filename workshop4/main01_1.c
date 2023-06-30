#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

extern index;
extern int N;

void printProduct(Product** products) {
	if (index == 0)printf("저장된 상품이 없습니다.\n");

	for (int i = 0; i < index; i++) {
		printf("[%s] %s %d\n", products[i]->id, products[i] -> name, products[i]->price);
	}
}

void addProduct(Product** products) {
	if (index == N) {
		products = realloc(products, sizeof(Product*) * N * 2);
		N *= 2;
	}

	products[index] = (Product*)malloc(sizeof(Product));

	printf("상품의 id를 입력하세요\n");
	scanf("%s", products[index]->id);
	printf("상품의 이름을 입력하세요\n");
	scanf("%s", products[index]->name);
	printf("상품의 가격을 입력하세요\n");
	scanf("%d", &products[index]->price);
	index++;
}

void updateBook(Product** products) {
	printf("수정할 상품의 id를 입력하세요\n");
	char n_id[50];
	scanf("%s", n_id);
	
	for (int i = 0; i < index; i++) {
		if (!strcmp(n_id, products[i]->id)) {
			printf("수정할 상품의 이름을 입력하세요\n");
			scanf("%s", products[i] -> name);
			printf("수정할 상품의 가격을 입력하세요\n");
			scanf("%d", &products[i]->price);
			return;
		}
		printf("해당 id의 상품이 존재하지 않습니다.\n");
	}

}

void deleteProduct(Product** products) {
	printf("삭제할 상품의 id를 입력하세요\n");
	char n_id[50];
	scanf("%s", n_id);
	for (int i = 0; i < index; i++) {
		if (!strcmp(n_id, products[i]->id)) {
			strcmp(products[i]->id, products[index - 1]->id);
			strcmp(products[i]->name, products[index - 1]->name);
			products[i]->price = products[index-1]->price;
			index--;
			return;
		}
		printf("해당 id의 상품이 존재하지 않습니다.\n");
	}
}

void findProduct(Product** products) {
	printf("찾을 상품의 id를 입력하세요\n");
	char product[50];
	scanf("%s", product);
	for (int i = 0; i < index; i++) {
		int check = strcmp(product, products[i]->id);
		if (check == 0) {
			printf("[%s] %s %d\n", products[i]->id, products[i]->name, products[i]->price);
			return;
		}
	}
	printf("해당 id의 상품이 존재하지 않습니다.\n");
}

void loadFromFile(Product** products) {
	int res = 0;
	FILE* fd = fopen("product.txt", "r");
	if (fd == NULL) {
		printf("File 쓰기에 실패했습니다\n");
		fflush(stdout);
		return;
	}

	while (1) {
		Product* pd = (Product*)malloc(sizeof(Product));
		res = fscanf(fd, "%s %s %d", pd->id, pd->name, &pd->price);
		if (res == EOF) {
			break;
		}
		products[index] = pd;
		index++;
	}
	fclose(fd);

}

void savetoFile(Product** products) {
	FILE* fd = fopen("product.text", "w");
	if (fd == NULL) {
		printf("File 쓰기 실패\n");
		return;
	}
	for (int i = 0; i < index; i++) {
		fprintf(fd, "%s %s %d\n", products[i]->id, products[i]->name, products[i]->price);
	}
	fclose(fd);
}
