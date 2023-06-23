extern index;

//아래 함수랑 같음
//void func(void(*fp)(char [10][50], int [10]), char name[10][50], int price[10]) {
//	fp(name, price);
//}

void func(void(*fp)(char(*)[50], int*), char (*name)[50], int* price) {
	fp(name, price);
}


void printBook(char name[10][50], int price[10]) {
	for (int i = 0; i < index; i++) {
		printf("[%d] %s %d\n", i, name[i], price[i]);
	}
}


void findBook(char name[10][50], int price[10]) {
	printf("찾을 책 이름을 입력하세요\n");
	char book[50];
	scanf("%s", book);
	for (int i = 0; i < index; i++) {
		int check = -1;
		check = strcmp(book, name[i]);
		if (check == 0) {
			printf("[%d] %s %d\n", i, name[i], price[i]);
			break;
		}
	}
}

void insertBook(char name[10][50], int price[10]) {
	printf("책 이름을 입력하세요\n");
	scanf("%s", &name[index]);
	printf("책 가격을 입력하세요\n");
	scanf("%d", &price[index]);
	index++;
}

void updateBook(char name[10][50], int price[10]) {
	printf("수정할 책 이름을 입력하세요\n");
	char book[50];
	scanf("%s", book);

	int d_index = -1;

	for (int i = 0; i < index; i++) {
		int check = -1;
		check = strcmp(name[i], book);
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
		scanf("%s", &name[d_index]);
		printf("새로운 책 가격을 입력하세요\n");
		scanf("%d", &price[d_index]);
	}
}

void deleteBook(char name[10][50], int price[10]) {
	printf("삭제할 책 이름을 입력하세요\n");
	char book[50];
	scanf("%s", book);

	int d_index = -1;

	for (int i = 0; i < index; i++) {
		int check = -1;
		check = strcmp(name[i], book);
		if (check == 0) {
			d_index = i;
			break;
		}
	}

	if (d_index == -1) {
		printf("해당하는 책이 없습니다.\n");
	}
	else {
		strcpy(name[d_index], name[index - 1]);
		price[d_index] = price[index - 1];
	}
	index--;
}