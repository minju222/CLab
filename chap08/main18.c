#include<stdio.h>
#include<stdlib.h>


// 한줄 입출력 파일 fgets, fputs
// 복사프로그램
int main18() {
	FILE* fin, * fout;

	char str[10];
	fin = fopen("test.txt", "rb");

	if (fin == NULL) {
		printf("읽기 파일이 열리지 안았습니다.\n");
		return 1;
	}

	fout = fopen("copy.txt", "wb");

	if (fout == NULL) {
		printf("쓰기 파일이 열리지 안았습니다.\n");
		return 1;
	}

	while (fgets(str, sizeof(str), fin) != NULL) {
		str[strlen(str)] = '\0';
		fputs(str, fout);
	}

	printf("복사가 완료되었습니다\n");
	fclose(fin);
	fclose(fout);

	return 0;
}
