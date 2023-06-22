#include <stdio.h>
#include <stdlib.h>

// 다차원 배열

int main02() {

	char arr[2][10] = { "hello", "scsa" };
	printf("%d %d\n", sizeof(arr), sizeof(arr[0]));  //20 10
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++) {
		printf("%s\n", arr[i]); //hello scsa
	}
	
}
