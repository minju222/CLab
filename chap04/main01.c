#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main01() {
	int arr[3];

	int* pa = arr;
	int i;

	*pa = 10;
	pa[1] = 20;
	pa[2] = *pa + pa[1];
	
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", *(pa + i));
	}

	
	return 0;
}