#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main04() {

	char imsi[20];
	char* names[3];

	names[0] = "홍길동";
	names[1] = "둘리";
	names[2] = "도우너";

	for (int i = 0; i < 3; i++) {
		printf("%s\n", names[i]);
	}





	return 0;
}