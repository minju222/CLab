
#include<stdio.h>
#include<stdlib.h>
#include "profile.h"

int main14() {
	int count = 0, i = 0;
	FILE* fd = fopen("test.txt", "w");
	if (fd == NULL) {
		printf("������ ������ �Ⱦҽ��ϴ�.\n");
		return 1;
	}

	printf("�Է��Ͻ� ������ �Է��ϼ���\n");
	scanf("%d", &count);

	Profile* pArr = 0;

	pArr = (Profile*)malloc(sizeof(Profile) * count);

	for (int i = 0; i < count; i++) {

		printf("�̸��� �Է��ϼ���\n");
		scanf("%s", (pArr + i)->name);

		printf("���̸� �Է��ϼ���\n");
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
