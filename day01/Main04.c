

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

    printf("a = %d\n",a++); //6�� ��µ�, ��ġ �����̶� ���α׷� ������ a=6�� �ƴ϶� a=7��

	return 0;
}
