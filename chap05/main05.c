#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main05() {
	int a = 10;
	int* pa = &a;
	int** ppa = &pa; // 이중 포인터(2차원 포인터는 1차원 포인터의 주소를 가짐)

	printf("%d %d %d\n", ppa, *ppa, **ppa); // pa의 주소, a의 주소, a 주소의 값 10
	
	int arr[] = { 1,3,5 };
	pa = arr;
	printf("%d %d %d %d\n", pa, *pa, *(pa+1), *(pa+2)); // arr의 주소, 1, 3, 5

	int arr2[] = { 2,4,6 };

	//포인터 배열
	//n개의 배열을 하나의 배열로 묶어 사용한다
	int* parr[2];
	parr[0] = arr;
	parr[1] = arr2;

	printf("%d %d\n", parr[0][0], parr[1][2]); // 1 6 두개의 배열을 하나의 변수로 접근 가능
	printf("%d %d\n", *(parr[0]), *(parr[1] + 2)); //1 6
	printf("%d %d\n", *(*(parr+0)), *(*(parr+1) + 2)); //1 6

	ppa = parr;

	printf("%d %d\n", *(*(ppa + 0)), *(*(ppa + 1) + 2)); //1 6
	printf("%d %d\n", **ppa, *(*(ppa + 1) + 2)); //1 6





	
	return 0;
}