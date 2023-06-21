
#define _CRT_SECURE_NO_WARNINGS

// console 로부터 값을 입력받는 프로그램
// fflush 사용공부
#include<stdio.h>
#include<stdlib.h>
int main03(){
	int a, b;
	printf("a 와 b 를 입력하세요\n");
	scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);

	printf("문자를 입력하세요\n");
	char c;
	// fflush(stdout); 	//버퍼에 입력된 엔터값을 읽어서 빼버림
	while (getchar() != '\n'); // \n가 아닌 것만 문자로 받음
	scanf("%c",&c);
	printf("%c",c);
	return 0;
}
