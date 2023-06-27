#include <stdio.h>
#include "profile.h"


int main12() {
	Profile p = { "둘리",7 };
	
	FILE* wfd = fopen("test.txt", "w");
	if (wfd == NULL) {
		printf("쓰기 권한으로 파일이 열리지 안았습니다\n");
		return -1;
	}

	fprintf(wfd, "%s %d\n", p.name,p.age);

	printf("쓰기가 완료되었습니다\n");
	fclose(wfd);



	return 0;
}