#include <stdio.h>

int main17() {
	FILE* fin, * fout;

	char str[10];
	fin = fopen("a.txt", "r");
	if (fin == NULL) return 1;

	while (fgets(str, sizeof(str), fin) != NULL) {
		printf("%s\n", str);
	}


	return 0;
}