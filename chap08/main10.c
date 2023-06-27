#include <stdio.h>


int main10() {
	FILE* wfd = fopen("test.txt", "w");
	if (wfd == NULL) {
		printf("쓰기 권한으로 파일이 열리지 안았습니다\n");
		return -1;
	}
	
	fprintf(wfd,"%s","파일에 문자열을 씁니다\n 다음줄 입니다");

	printf("쓰기가 완료되었습니다\n");
	fclose(wfd);

	

	return 0;
}