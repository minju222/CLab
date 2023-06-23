#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 전역변수
int ga = 5;

int main03() {
	// 지역변수
	// 정적 선언 방식 -> int로 선언하면 자동으로 4바이트 공간 잡아서 줌
	// 함수 끝나야 메모리 해제됨
	int a = 10;

	// 동적 선언 방식
	void* vp = malloc(4); //heap 영역에 4바이트 공간이 할당됨, return type이 void pointer -> 주소를 리턴함
	*(int* )vp = 10; //void pointer를 int형 pointer로 형변환 하고, 그 주소에 10을 넣어줌
	printf("%d\n", *(int*)vp); //10

	int* p = (int*)malloc(4);
	*p = 5;
	printf("%d\n", *p); //5

	//동적 선언 방식은 메모리 해제를 free 함수를 이용하여 해제해주어야 한다.
	free(p);
	printf("%d\n", *p); //free 이후에 쓰레기데이터가 들어갈 수 있음

	malloc(sizeof(double));


	return 0;
}