

#include<stdio.h>
#include<stdlib.h>

int main04() {

	int a=10;
	int b;

	a = a+5;
	a += 5;
	a = a - 5;
	a -= 5;
	a *= 5;
	a /= 10;
	a = a + 1;
	a++;
	a--;

    printf("a = %d\n",a++); //6이 출력됨, 후치 연산이라 프로그램 끝나면 a=6이 아니라 a=7임

	return 0;
}
