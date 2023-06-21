#include <stdio.h>
#include <stdlib.h>
/*
int arr[3] -> int는 4바이트
이면 arr 가 0001주소일때,
arr[0]-> 0001~0004
arr[1]-> 0005~0008
arr[2]-> 0009~0012
arr[0]에 int가 저장되면 4개가 한칸처럼 돼서, arr+1하면 0005를 참조함
*/

int main06() {
	int arr[5] = { 1,3,5,7,9 };
	printf("%p %d %p %d ", arr, arr[0], arr+1, arr[1]);//1, 3, 배열의 이름 == 주소 // ~8 -> ~C : +1 하면 크기가 4가 늘어남 == 배열의 int형이 4바이트여서
	// 주소를 사친연산 할 수 있다

	int a = 10;

	printf("%d\n", *&a); //10


	printf("%d %d %d %d\n", arr[0], *arr, *(arr+1), *(arr+2)); //1 1 3 5

	scanf("%d %d %d", &arr[0], arr + 1, arr + 2); //arr는 주소여서 +1해도 & 안붙여도 됨

	printf("%d %d %d\n", arr[0], arr[1], *(arr + 2));

	
	return 0;
}