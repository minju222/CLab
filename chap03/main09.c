#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

//���� �迭
int main09() {
	//char str[10];
	int i = 0;
	int size = 0;

	char str[10] = "hello";

	//str[0] = 'h';
	//str[1] = 'e';
	//str[2] = 'l';
	//str[3] = 'l';
	//str[4] = 'o';

	size = sizeof(str) / sizeof(char);
	//for (; i < size; i++) {
	//	printf("%c ", str[i]); //h e l l o ????? ���
	//}

	//printf("%s\n", str); //hello
	
	str[3] = '\0';
	printf("%s\n", str); //hel -> \0������ �������� ����
	printf("%s %d\n", str, strlen(str)); //hel 3 -> \0 ������ �������� ���ڿ��� ����

	return 0;
}