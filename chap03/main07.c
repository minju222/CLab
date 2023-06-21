#include <stdio.h>
#include <stdlib.h>

int add(int a) {
	a++;
	printf("add : a = %d\n", a); //11
	return;
};

int add2(int *a) {
	printf("add2 : a = %d\n", a); //주소값이 찍힘
	printf("add2 : a = %d\n", *a); //주소에 있는 변수값이 찍힘
	(*a)++;
	printf("add2 : a = %d\n", *a); //11
	return;
};


void addArr(int* arr) {
	arr[0]++;
};

int main07() {
	int arr[5] = { 1,3,5,7,9 };
	int a = 10;
	add(a);
	printf("add : a = %d\n", a); //10 ->add 함수 안의 a는 main 함수의 a와 다른 변수임(함수로 넘긴건 주소값이 아니라 그냥 a의 변수값

	addArr(arr);
	printf("addArr : a = %d\n", arr[0]); //2 -> arr의 주소값을 넘겨서 arr[0]의 값이 실제로 증가함

	add2(&a); //a의 주소값을 넘김
	printf("addArr : a = %d\n", arr[0]); //11 -> a의 주소값을 넘겨서 a의 값이 실제로 증가함

	return 0;
}