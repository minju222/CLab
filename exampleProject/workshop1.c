#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "workshop.h"


int index = 0;

int main() {
	char name[10][50];
	int price[10];

	while (1) {
		int menu = 0;
		printf("1: ���, 2: ������˻�, 3: �Է�, 4: ����, 5: ����, 0: ����\n");
		scanf("%d", &menu);
		switch (menu) {
		case 1:
			printBook(name, price);
			break;
		case 2:
			findBook(name, price);
			break;
		case 3:
			insertBook(name, price);
			break;
		case 4:
			updateBook(name, price);
			break;
		case 5:
			deleteBook(name, price);
			break;
		case 0:
			printf("���α׷��� ����Ǿ����ϴ�\n");
			exit(0);
			break;
		default:
			break;
		}
	}

	return 0;
}




