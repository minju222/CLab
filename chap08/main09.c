#include <stdio.h>


int main09() {
	FILE* wfd = fopen("test.txt","w");
	if (wfd == NULL) {
		printf("쓰기 권한으로 파일이 열리지 안았습니다\n");
		return -1;
	}

	fclose(wfd);

	FILE* ifd = fopen("test.txt", "r");
	if (ifd == NULL) {
		printf("읽기 권한으로 파일이 열리지 안았습니다\n");
		return -1;
	}
	fclose(ifd);

	return 0;
}