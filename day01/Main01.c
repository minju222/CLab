/*
 * Main01.c
 *
 *  Created on: 2016. 6. 22.
 *      Author: 315-08
    ������ �Է¹ޱ�
 */

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


int main01() {
	int a, b, c;
	printf("�� ������ �Է��ϼ���\n");
	fflush(stdout);
	//scanf("%d %d", &a, &b);
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);
	c = a - b;
	printf("%d - %d = %d\n", a, b, c);
	c = a * b;
	printf("%d * %d = %d\n", a, b, c);

	float result = (float)a / (float)
	b;
	printf("%d / %d = %lf\n", a, b, result);
	return 0;
}

