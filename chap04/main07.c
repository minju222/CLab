#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b) {
	return a + b;
}

int sum2(int* a, int* b) {
	//return a + b; //여기는 주소값이 들어있어서 주소 연산이됨
	return *a + *b; //이게 값연산
}

int* sum3(int* a, int* b) {
	int res = *a + *b;
	return &res; //값 연산한 값을 res에 넣어서 res의 주소를 return
}

int sum4(int arr[], int len) { //포인터 int arr[]== (int* arr)
	printf("%d %d\n", arr[0], sizeof(arr)); //size 8byte -> 
	return 0;
}

int main07() {
	int a = 10, b = 5;

	int res = sum(10, 5);
	printf("%d\n", res);

	sum2(&a, &b);

	int* res2 = sum3(&a, &b);
	printf("%d\n", res2);

	int arr[3] = { 1,2,3 };
	int len = sizeof(arr) / sizeof(int);
	sum4(arr, len);//주소를 넘김


	return 0;
}