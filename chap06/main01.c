#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//함수 포인터

//함수 선언부
void hello();
int plus(int a, int b);
int minus(int a, int b);
int calc(int (*fp)(int, int), int a, int b); //함수 포인터와 정수 두개를 인자로 받는 함수 선언


int main01() {
	printf("%u\n", hello); //hello라는 함수의 주소 -> 함수의 이름 == 주소

	//호출부
	//함수 포인터 변수
	int (*fp) (int, int);//return 타입+괄호꼭 넣기+ 받을수 있는 인자 타입 표기 -> int 두개를 받아서 int를 return하는 함수만 가리킬 수 있음
	fp = plus; //함수의 주소를 함수 포인터에 넣음(함수는 이름이 주소라 & 안붙임)
	printf("%d\n", fp(10, 5)); //15
	fp = minus;
	printf("%d\n", fp(10, 5)); //5

	//래핑함수를 이용한 함수 포인터 사용
	printf("%d\n", calc(plus, 10, 5)); //15
	printf("%d\n", calc(minus, 10, 5)); //5


	return 0;
}

//구현부
void hello() {

}

int plus(int a, int b) {
	return a + b;
}

int minus(int a, int b) {
	return a - b;
}

int calc(int (*fp)(int, int), int a, int b) {
	return fp(a, b);
}