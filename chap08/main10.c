#include <stdio.h>


int main10() {
	FILE* wfd = fopen("test.txt", "w");
	if (wfd == NULL) {
		printf("���� �������� ������ ������ �Ⱦҽ��ϴ�\n");
		return -1;
	}
	
	fprintf(wfd,"%s","���Ͽ� ���ڿ��� ���ϴ�\n ������ �Դϴ�");

	printf("���Ⱑ �Ϸ�Ǿ����ϴ�\n");
	fclose(wfd);

	

	return 0;
}