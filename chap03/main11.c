#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

//문자 배열
int main11() {
	int arr[2][3] = { {1,3}, {5,7} };
	printf("%d\n", arr[0][0]); //1

	printf("%d\n", **arr); //1 arr은 주소, *arr도 주소, **arr이 값

	printf("%d \n", *(*(arr + 1) + 1)); //7
	printf("%d \n", *(*(arr)+1)); //3
	printf("%d \n", *(*(arr+1))); //5



	return 0;
}