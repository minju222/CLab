#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

//���� �迭
int main11() {
	int arr[2][3] = { {1,3}, {5,7} };
	printf("%d\n", arr[0][0]); //1

	printf("%d\n", **arr); //1 arr�� �ּ�, *arr�� �ּ�, **arr�� ��

	printf("%d \n", *(*(arr + 1) + 1)); //7
	printf("%d \n", *(*(arr)+1)); //3
	printf("%d \n", *(*(arr+1))); //5



	return 0;
}