#include <stdio.h>
#include "profile.h"


int main12() {
	Profile p = { "�Ѹ�",7 };
	
	FILE* wfd = fopen("test.txt", "w");
	if (wfd == NULL) {
		printf("���� �������� ������ ������ �Ⱦҽ��ϴ�\n");
		return -1;
	}

	fprintf(wfd, "%s %d\n", p.name,p.age);

	printf("���Ⱑ �Ϸ�Ǿ����ϴ�\n");
	fclose(wfd);



	return 0;
}