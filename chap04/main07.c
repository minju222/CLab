#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b) {
	return a + b;
}

int sum2(int* a, int* b) {
	//return a + b; //����� �ּҰ��� ����־ �ּ� �����̵�
	return *a + *b; //�̰� ������
}

int* sum3(int* a, int* b) {
	int res = *a + *b;
	return &res; //�� ������ ���� res�� �־ res�� �ּҸ� return
}

int sum4(int arr[], int len) { //������ int arr[]== (int* arr)
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
	sum4(arr, len);//�ּҸ� �ѱ�


	return 0;
}