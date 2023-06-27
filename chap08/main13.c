#include <stdio.h>
#include <stdlib.h>
#include "profile.h"
int main13() {
	FILE* ifd = fopen("test.txt", "r");
	if (ifd == NULL) {
		printf("읽기 권한으로 파일이 열리지 안았습니다\n");
		return -1;
	}
	Profile p;

	while (fscanf(ifd, "%s %d", p.name, &p.age) != EOF) {
		printf("%s %d", p.name, p.age);
	}


	fclose(ifd);

	return 0;
}