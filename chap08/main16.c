#include <stdio.h>
#include <stdlib.h>

int main16() {
	FILE* fd;
	char name[2];
	int age = 0;
	fd = fopen("a.txt", "w+");
	if (fd == NULL) return -1;
	fprintf(fd, "%s %d", "�Ѹ�", 7);
	// SEEK_SET  ������ ������
	// SEEK_CUR  ������ġ
	// SEEK_END  ������ ��
	fseek(fd,0, SEEK_SET);
	//fprintf(fd, "%s %d", "�����", 8);

	//fflush(stdout);
	

	//fd = fopen("a.txt", "r");
	fscanf(fd, "%s %d", name, &age);
	printf("%s %d", name, age);

	fclose(fd);
	return 0;
}