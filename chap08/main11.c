#include <stdio.h>


int main11() {
	FILE* ifd = fopen("test.txt", "r");
	if (ifd == NULL) {
		printf("읽기 권한으로 파일이 열리지 안았습니다\n");
		return -1;
	}
	char str[100];
	
	while (fscanf(ifd, "%s", str) != EOF) {
		printf("%s ", str);
	}
	
	
	fclose(ifd);

	return 0;
}