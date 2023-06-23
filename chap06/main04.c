#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	동적으로 배열을 선언할 수 있다

*/

int main04() {
	//정적 선언 방식
	int arr[5];

	//동적 선언 방식
	int* p = (int*)malloc(sizeof(int) * 5);
	if (p == NULL){
		printf("메모리가 부족합니다");
		return 0;

	}
	*p = 1;
	*(p + 1) = 3;
	p[2] = 5;
	p[3] = 7;


	printf("%d %d %d %d\n", *p,  * (p + 1) , p[2], p[3]); //1 3 5 7
	for (int i = 0; i < 4; i++) {
		("%d", p[i]);
	}
	printf("\n");

	return 0;
}