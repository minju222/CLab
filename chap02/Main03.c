
#define _CRT_SECURE_NO_WARNINGS

// console 로부터 값을 입력받는 프로그램
// fflush 사용공부
#include<stdio.h>
#include<stdlib.h>
int main03(){
	int a, b;
	printf("a 와 b 를 입력하세요\n");
	scanf_s("%d %d",&a,&b);
	printf("%d %d\n",a,b);

//	printf("문자를 입력하세요\n");
//	//fflush(stdin);
//	char c;
//	scanf("%c",&c);
//	printf("%c",c);
	return 0;
}
