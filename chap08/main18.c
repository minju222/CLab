#include<stdio.h>
#include<stdlib.h>


// ���� ����� ���� fgets, fputs
// �������α׷�
int main18() {
	FILE* fin, * fout;

	char str[10];
	fin = fopen("test.txt", "rb");

	if (fin == NULL) {
		printf("�б� ������ ������ �Ⱦҽ��ϴ�.\n");
		return 1;
	}

	fout = fopen("copy.txt", "wb");

	if (fout == NULL) {
		printf("���� ������ ������ �Ⱦҽ��ϴ�.\n");
		return 1;
	}

	while (fgets(str, sizeof(str), fin) != NULL) {
		str[strlen(str)] = '\0';
		fputs(str, fout);
	}

	printf("���簡 �Ϸ�Ǿ����ϴ�\n");
	fclose(fin);
	fclose(fout);

	return 0;
}
