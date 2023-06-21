#include <stdio.h>
#include <stdlib.h>


int main08() {
	int arr[5] = { 1,3,5,7,9 };

	printf("%d %d\n", sizeof(arr), sizeof(arr)/sizeof(arr[0])); // 20(4바이트 5개), 5(요소의 갯수)

	return 0;
}