#include <stdio.h>
#include <stdlib.h>
#include "profile.h"
int main15() {
	FILE* fd = fopen("test.txt", "r");
	if (fd == NULL) {
		return -1;
	}
	int res = -1;
	Profile* p = (Profile*)malloc(sizeof(Profile));
	
	while (1) {
		res = fscanf(fd, "%s %d", p->name, &p->age);
		if (res == EOF) {
			break;
		}
		printf("%s %d\n", p->name, p->age);
	}


	free(p);
	fclose(fd);

	return 0;
}