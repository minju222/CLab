#include <stdio.h>


int main09() {
	FILE* wfd = fopen("test.txt","w");
	if (wfd == NULL) {
		printf("���� �������� ������ ������ �Ⱦҽ��ϴ�\n");
		return -1;
	}

	fclose(wfd);

	FILE* ifd = fopen("test.txt", "r");
	if (ifd == NULL) {
		printf("�б� �������� ������ ������ �Ⱦҽ��ϴ�\n");
		return -1;
	}
	fclose(ifd);

	return 0;
}