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
	printf("정수를 입력하세요\n");
	fflush(stdout);
	scanf("%d", &a);
	if(a%2==0){
		printf("입력하신 정수 %d 는 짝수입니다.\n",a);
	}else{
		printf("입력하신 정수 %d 는 홀수입니다.\n",a);
	}
    return 0;
}
