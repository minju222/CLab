#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main07(int argc, char ** argv) {
	printf("%d \n", argc);//1
	printf("%s %s\n", *argv);//C:\Users\student\source\repos\CLab\x64\Debug\chap06.exe -> 실행파일명이 문자열로 날라옴

	for (int i = 0; i < argc; i++) {
		printf("%s\n", *(argv + i));
	}

	/*
	atoi 문자를 숫자로 바꾸어준다
	itoa 숫자를 문자로 바꾸어준다
	sprintf 숫자를 문자형으로 바꾸어준다	
	*/

	int a = atoi(argv[1]);
	printf("%d\n", a);

	return 0;
 }