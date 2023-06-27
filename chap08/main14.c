
#include<stdio.h>
#include<stdlib.h>
#include "profile.h"

int main14() {
	int count = 0, i = 0;
	FILE* fd = fopen("test.txt", "w");
	if (fd == NULL) {
		printf("파일이 열리지 안았습니다.\n");
		return 1;
	}

	printf("입력하실 갯수를 입력하세요\n");
	scanf("%d", &count);

	Profile* pArr = 0;

	pArr = (Profile*)malloc(sizeof(Profile) * count);

	for (int i = 0; i < count; i++) {

		printf("이름을 입력하세요\n");
		scanf("%s", (pArr + i)->name);

		printf("나이를 입력하세요\n");
		scanf("%d", &(pArr + i)->age);
	}

	for (int i = 0; i < count; i++) {
		//printf("%s %d\n", (pArr + i)->name, (pArr + i)->age);
		fprintf(fd, "%s %d\n", (pArr + i)->name, (pArr + i)->age);
	}
	fflush(stdout);

	free(pArr);

	fclose(fd);
	return 0;
}
