#include <stdio.h>
#include <stdlib.h>

int main16() {
	FILE* fd;
	char name[2];
	int age = 0;
	fd = fopen("a.txt", "w+");
	if (fd == NULL) return -1;
	fprintf(fd, "%s %d", "둘리", 7);
	// SEEK_SET  파일의 시작점
	// SEEK_CUR  현제위치
	// SEEK_END  파일의 끝
	fseek(fd,0, SEEK_SET);
	//fprintf(fd, "%s %d", "도우너", 8);

	//fflush(stdout);
	

	//fd = fopen("a.txt", "r");
	fscanf(fd, "%s %d", name, &age);
	printf("%s %d", name, age);

	fclose(fd);
	return 0;
}