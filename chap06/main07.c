#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main07(int argc, char ** argv) {
	printf("%d \n", argc);//1
	printf("%s %s\n", *argv);//C:\Users\student\source\repos\CLab\x64\Debug\chap06.exe -> �������ϸ��� ���ڿ��� �����

	for (int i = 0; i < argc; i++) {
		printf("%s\n", *(argv + i));
	}

	/*
	atoi ���ڸ� ���ڷ� �ٲپ��ش�
	itoa ���ڸ� ���ڷ� �ٲپ��ش�
	sprintf ���ڸ� ���������� �ٲپ��ش�	
	*/

	int a = atoi(argv[1]);
	printf("%d\n", a);

	return 0;
 }