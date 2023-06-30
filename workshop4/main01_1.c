#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

extern index;
extern int N;

void printProduct(Product** products) {
	if (index == 0)printf("����� ��ǰ�� �����ϴ�.\n");

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

	printf("��ǰ�� id�� �Է��ϼ���\n");
	scanf("%s", products[index]->id);
	printf("��ǰ�� �̸��� �Է��ϼ���\n");
	scanf("%s", products[index]->name);
	printf("��ǰ�� ������ �Է��ϼ���\n");
	scanf("%d", &products[index]->price);
	index++;
}

void updateBook(Product** products) {
	printf("������ ��ǰ�� id�� �Է��ϼ���\n");
	char n_id[50];
	scanf("%s", n_id);
	
	for (int i = 0; i < index; i++) {
		if (!strcmp(n_id, products[i]->id)) {
			printf("������ ��ǰ�� �̸��� �Է��ϼ���\n");
			scanf("%s", products[i] -> name);
			printf("������ ��ǰ�� ������ �Է��ϼ���\n");
			scanf("%d", &products[i]->price);
			return;
		}
		printf("�ش� id�� ��ǰ�� �������� �ʽ��ϴ�.\n");
	}

}

void deleteProduct(Product** products) {
	printf("������ ��ǰ�� id�� �Է��ϼ���\n");
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
		printf("�ش� id�� ��ǰ�� �������� �ʽ��ϴ�.\n");
	}
}

void findProduct(Product** products) {
	printf("ã�� ��ǰ�� id�� �Է��ϼ���\n");
	char product[50];
	scanf("%s", product);
	for (int i = 0; i < index; i++) {
		int check = strcmp(product, products[i]->id);
		if (check == 0) {
			printf("[%s] %s %d\n", products[i]->id, products[i]->name, products[i]->price);
			return;
		}
	}
	printf("�ش� id�� ��ǰ�� �������� �ʽ��ϴ�.\n");
}

void loadFromFile(Product** products) {
	int res = 0;
	FILE* fd = fopen("product.txt", "r");
	if (fd == NULL) {
		printf("File ���⿡ �����߽��ϴ�\n");
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
		printf("File ���� ����\n");
		return;
	}
	for (int i = 0; i < index; i++) {
		fprintf(fd, "%s %s %d\n", products[i]->id, products[i]->name, products[i]->price);
	}
	fclose(fd);
}
