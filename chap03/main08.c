#include <stdio.h>
#include <stdlib.h>


int main08() {
	int arr[5] = { 1,3,5,7,9 };

	printf("%d %d\n", sizeof(arr), sizeof(arr)/sizeof(arr[0])); // 20(4����Ʈ 5��), 5(����� ����)

	return 0;
}