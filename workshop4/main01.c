#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

int N = 2;
int index = 0;

void func(void (*fp)(Product**), Product** products) {
	fp(products);
}

int main() {
	Product* products = malloc(sizeof(Product) * N);
	loadFromFile(products);

	while (1) {
		int menu = 0;
		printf("1:상품 출력, 2:상품 추가, 3:상품 수정, 4:상품 삭제, 5:상품 찾기, 0:종료\n");
		scanf("%d", &menu);
		switch (menu) {
		case 1:
			func(printProduct, products);
			break;
		case 2:
			func(addProduct, products);
			break;
		case 3:
			func(updateBook, products);
			break;
		case 4:
			func(deleteProduct, products);
			break;
		case 5:
			func(findProduct, products);
			break;
		case 0:
			printf("파일을 저장했습니다.\n");
			savetoFile(products);
			exit(0);
			break;
		default:
			break;
		}

	}

	return 0;
}