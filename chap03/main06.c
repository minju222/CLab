#include <stdio.h>
#include <stdlib.h>
/*
int arr[3] -> int�� 4����Ʈ
�̸� arr �� 0001�ּ��϶�,
arr[0]-> 0001~0004
arr[1]-> 0005~0008
arr[2]-> 0009~0012
arr[0]�� int�� ����Ǹ� 4���� ��ĭó�� �ż�, arr+1�ϸ� 0005�� ������
*/

int main06() {
	int arr[5] = { 1,3,5,7,9 };
	printf("%p %d %p %d ", arr, arr[0], arr+1, arr[1]);//1, 3, �迭�� �̸� == �ּ� // ~8 -> ~C : +1 �ϸ� ũ�Ⱑ 4�� �þ == �迭�� int���� 4����Ʈ����
	// �ּҸ� ��ģ���� �� �� �ִ�

	int a = 10;

	printf("%d\n", *&a); //10


	printf("%d %d %d %d\n", arr[0], *arr, *(arr+1), *(arr+2)); //1 1 3 5

	scanf("%d %d %d", &arr[0], arr + 1, arr + 2); //arr�� �ּҿ��� +1�ص� & �Ⱥٿ��� ��

	printf("%d %d %d\n", arr[0], arr[1], *(arr + 2));

	
	return 0;
}