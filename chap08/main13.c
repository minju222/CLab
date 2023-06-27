#include <stdio.h>
#include <stdlib.h>
#include "profile.h"
int main13() {
	FILE* ifd = fopen("test.txt", "r");
	if (ifd == NULL) {
		printf("�б� �������� ������ ������ �Ⱦҽ��ϴ�\n");
		return -1;
	}
	Profile p;

	while (fscanf(ifd, "%s %d", p.name, &p.age) != EOF) {
		printf("%s %d", p.name, p.age);
	}


	fclose(ifd);

	return 0;
}