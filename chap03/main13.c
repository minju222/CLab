#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

void addd(int* a) { //주소값을 받을 때는 함수의 인자를 포인터 변수로 받아야함
	(*a)++; //넘겨받은 주소에 있는 데이터를 증가시킴
}


int main13() {
	int a = 10;
	int* pa = &a; //주소를 저장하는 변수
	printf("%d\n", &pa); //-2037384904
	printf("%d\n", &a); // -2037384940 -> pa와 a의 주소값은 다름
	printf("%d %d\n", &a, pa); //-2037384940 -2037384940 -> a의 주소를 pa에 넣어놨기 때문에 같음
	printf("%d %d\n", *&a, *pa); //10 10 -> 따라서 * 붙였을 떄 값이 같음

	addd(&a);
	printf("%d\n", a); //11

	return 0;

}