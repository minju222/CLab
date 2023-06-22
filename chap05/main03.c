#include <stdio.h>
#include <stdlib.h>

int main03() {
	int arr[4][3] = { {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
	int* p1 = arr;
	int* p2;
	int* p3;
	int* p4;
	// 배열: 같은 데이터 타입의 순서적 나열

	//포인터 배열
	int* parr[4];

	parr[0] = arr[0];
	parr[1] = arr[1];
	parr[2] = arr[2];
	parr[3] = arr[3];

	printf("%d \n", &arr[0]); //주소
	printf("%d \n", parr[0]); //arr[0]의 주소
	printf("%d \n", *parr[0]); // 1
	printf("%d \n", parr[0][0]); // 1
	printf("%d \n", parr[3][2]); // 12 -> 포인터 1차원 배열을 2차원 배열처럼 사용(넣어논것 자체가 배열이라서)

	int* parr2[4]; //각각의 크기가 다른 배열을 받아서 써서 메모리를 컴팩트하게 쓸 수 있음
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