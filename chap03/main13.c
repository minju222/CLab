#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

void addd(int* a) { //�ּҰ��� ���� ���� �Լ��� ���ڸ� ������ ������ �޾ƾ���
	(*a)++; //�Ѱܹ��� �ּҿ� �ִ� �����͸� ������Ŵ
}


int main13() {
	int a = 10;
	int* pa = &a; //�ּҸ� �����ϴ� ����
	printf("%d\n", &pa); //-2037384904
	printf("%d\n", &a); // -2037384940 -> pa�� a�� �ּҰ��� �ٸ�
	printf("%d %d\n", &a, pa); //-2037384940 -2037384940 -> a�� �ּҸ� pa�� �־���� ������ ����
	printf("%d %d\n", *&a, *pa); //10 10 -> ���� * �ٿ��� �� ���� ����

	addd(&a);
	printf("%d\n", a); //11

	return 0;

}