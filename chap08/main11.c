#include <stdio.h>


int main11() {
	FILE* ifd = fopen("test.txt", "r");
	if (ifd == NULL) {
		printf("�б� �������� ������ ������ �Ⱦҽ��ϴ�\n");
		return -1;
	}
	char str[100];
	
	while (fscanf(ifd, "%s", str) != EOF) {
		printf("%s ", str);
	}
	
	
	fclose(ifd);

	return 0;
}