#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main03() {
	//ascii code
	for (int i = 0; i < 255; i++) {
		printf("%d : %c\n", i, i);
	}
	printf("\n");

	printf("%d\n", 'A'>'B'); //0 ->false
	//scanf�� "%c"�� ���� ����� �Ѵ�
	//printf �� �� �˸� ����
	char c = getchar();
	putchar(c);

	return 0;
}