#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

//���� �迭
int main12() {
	char arr[2][10] = { "hello", "scsa" };

	printf("%s\n", arr[0]); //hello %s���� �ּҰ��� �����
	printf("%s\n", *arr);//hello
	printf("%s\n", *(arr + 1));//scsa

	printf("%c\n", *((*arr) + 1)); //e %c�� ���� �Ѱܾ���
	printf("%c\n", *(*(arr + 1) + 3)); //a





	return 0;
}