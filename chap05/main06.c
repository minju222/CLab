#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void arrPrint(char **arr[], int len) {
	printf("%c", **arr);
	//printf("arrPrint: %d\n", sizeof(arr); //20

}

int main06() {
	char* arr[] = {"dul", "seot", "neot", "dasut"};
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sizeof(arr)); //32바이트

	//포인터의 배열을 함수의 인자로 넣게되면
	//파라미터 타입은 이중 포인터로 정의된다
	arrPrint(arr, len);

	/* 파라미터 타입이 이중 포인터이면 2차원 배열을 입력하면 안된다
	char test[3][3] = { "111", "222", "333" };
	arrPring(test, len);
	*/

	return 0;

}