/*
 * Main04.c
 *
 *  Created on: 2016. 6. 23.
 *      Author: 315-08
 */

#include<stdio.h>
#include<stdlib.h>

int main04() {
	int a;
	printf("������ �Է��ϼ���\n");
	fflush(stdout);
	scanf("%d", &a);
	if(a%2==0){
		printf("�Է��Ͻ� ���� %d �� ¦���Դϴ�.\n",a);
	}else{
		printf("�Է��Ͻ� ���� %d �� Ȧ���Դϴ�.\n",a);
	}
    return 0;
}
