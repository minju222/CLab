#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void pointer
//타입이 지정되지 않은 포인터변수

int main02() {
	int a = 10;
	char* p = &a; //char로 선언하고 int 주소 받아도 에러 안남
	int* pa = (int*)p;//int형으로 문자형 포인트변수 형변환 가능

	printf("%u %u\n", p, p + 1); //주소 44, 45 -> 에러는 안나지만 int 4바이튼데 char 포인터로 선언해서 주소값 연산하면 한바이트만 증가

	double b = 3.14;

	// void* 타입 변수는 모든 타입의 변수를 카르킬 수는 있으나
	// 사용하기 위해서는 형변환을 해주어야 한다
	void* vp;
	vp = &a;
	printf("%d\n", *(int*) vp);
	vp = &b;
	printf("%.2lf\n", *(double*)vp);






}