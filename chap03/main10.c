#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

//���� �迭
int main10() {
	//char str[10];
	int i = 0;
	int size = 0;

	char str[10] = "hello";
	char str2[10];

	// str2 = str; //�Ұ���
	strcpy(str2, str); //
	printf("%s %d\n", str2, strlen(str)); 
	printf("%d\n", strcmp( str2, str)); //���� ������ ������ ��� ��ȯ, ������ 0 ��ȯ

	return 0;
}