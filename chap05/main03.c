#include <stdio.h>
#include <stdlib.h>

int main03() {
	int arr[4][3] = { {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
	int* p1 = arr;
	int* p2;
	int* p3;
	int* p4;
	// �迭: ���� ������ Ÿ���� ������ ����

	//������ �迭
	int* parr[4];

	parr[0] = arr[0];
	parr[1] = arr[1];
	parr[2] = arr[2];
	parr[3] = arr[3];

	printf("%d \n", &arr[0]); //�ּ�
	printf("%d \n", parr[0]); //arr[0]�� �ּ�
	printf("%d \n", *parr[0]); // 1
	printf("%d \n", parr[0][0]); // 1
	printf("%d \n", parr[3][2]); // 12 -> ������ 1���� �迭�� 2���� �迭ó�� ���(�־��� ��ü�� �迭�̶�)

	int* parr2[4]; //������ ũ�Ⱑ �ٸ� �迭�� �޾Ƽ� �Ἥ �޸𸮸� ����Ʈ�ϰ� �� �� ����
	int a[] = { 1,2,3 };
	int b[] = { 4,5,6,7 };
	int c[] = { 11,22,33 };
	int d[] = { 100 };

	parr2[0] = a;
	parr2[1] = b;
	parr2[2] = c;
	parr2[3] = d;
	printf("%d \n", parr2[3][0]); // 100


	return 0;
}