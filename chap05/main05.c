#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main05() {
	int a = 10;
	int* pa = &a;
	int** ppa = &pa; // ���� ������(2���� �����ʹ� 1���� �������� �ּҸ� ����)

	printf("%d %d %d\n", ppa, *ppa, **ppa); // pa�� �ּ�, a�� �ּ�, a �ּ��� �� 10
	
	int arr[] = { 1,3,5 };
	pa = arr;
	printf("%d %d %d %d\n", pa, *pa, *(pa+1), *(pa+2)); // arr�� �ּ�, 1, 3, 5

	int arr2[] = { 2,4,6 };

	//������ �迭
	//n���� �迭�� �ϳ��� �迭�� ���� ����Ѵ�
	int* parr[2];
	parr[0] = arr;
	parr[1] = arr2;

	printf("%d %d\n", parr[0][0], parr[1][2]); // 1 6 �ΰ��� �迭�� �ϳ��� ������ ���� ����
	printf("%d %d\n", *(parr[0]), *(parr[1] + 2)); //1 6
	printf("%d %d\n", *(*(parr+0)), *(*(parr+1) + 2)); //1 6

	ppa = parr;

	printf("%d %d\n", *(*(ppa + 0)), *(*(ppa + 1) + 2)); //1 6
	printf("%d %d\n", **ppa, *(*(ppa + 1) + 2)); //1 6





	
	return 0;
}