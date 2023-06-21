#include <stdio.h>
#include <stdlib.h>

int add(int a) {
	a++;
	printf("add : a = %d\n", a); //11
	return;
};

int add2(int *a) {
	printf("add2 : a = %d\n", a); //�ּҰ��� ����
	printf("add2 : a = %d\n", *a); //�ּҿ� �ִ� �������� ����
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
	printf("add : a = %d\n", a); //10 ->add �Լ� ���� a�� main �Լ��� a�� �ٸ� ������(�Լ��� �ѱ�� �ּҰ��� �ƴ϶� �׳� a�� ������

	addArr(arr);
	printf("addArr : a = %d\n", arr[0]); //2 -> arr�� �ּҰ��� �Ѱܼ� arr[0]�� ���� ������ ������

	add2(&a); //a�� �ּҰ��� �ѱ�
	printf("addArr : a = %d\n", arr[0]); //11 -> a�� �ּҰ��� �Ѱܼ� a�� ���� ������ ������

	return 0;
}