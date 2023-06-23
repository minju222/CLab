#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void finish(int arr2[2][2]) {//== int(*arr2)[2]
	printf("%d %d\n", sizeof(arr2), arr2[1][1]); // 8 7
	int** pp = &arr2;
	printf("%d\n", **pp);//1
}

int main07() {
	//일차원 배열
	int arr[5];
	printf("%u %u %u %u\n", arr, &arr, arr+1, &arr+1); //주소값 28 28 32(다음 요소) 48(&arr연산은 자기 전체 영역의 크기 만큼 증가)

	int arr2[2][2] = { {1,3}, {5,7} };
	printf("%u %u %u %u\n", arr2, &arr2, arr2 + 1, &arr2 + 1); // 같은 주소 08 08 16({1,3}지난 주소) 24
	printf("%u %u %u %u\n", arr2, &arr2, arr2[1], &arr2[1]); //  88 88 96 96

	//배열 포인터
	int(*p)[2] = arr2;
	printf("%u %u %u %d %d\n", p, *p, **p, p[1][1], *(*(p+1))); // 같은 주소 같은 주소 1 7 5

	printf("%d\n", sizeof(p)); //8바이트

	printf("%d\n", sizeof(arr2)); //16바이트
	finish(arr2);
	return 0;

}