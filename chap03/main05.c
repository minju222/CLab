#include <stdio.h>
#include <stdlib.h>

int main05() {
	int arr[5] = { 1,3,5,7,9};
	//int arr[5] = { 1,3,5,7}; //�̷��� �������� 0�� �ڵ����� ��
	//int arr[] = { 1,3,5,7 }; //�̷��� ũ�� �װ�¥���� ������ �Ǿ��� ��
	//arr[0] = 1;
	//arr[1] = 3;
	//arr[2] = 5;
	//arr[3] = 7;
	//arr[4] = 9;
	//arr[5] = 10; -> �̰ŵ� �Ǵµ� VS������ �ȵ�
	int i = 0;
	for (; i < 5; i ++ ) {
		printf("%d ", arr[i]);
	}
}