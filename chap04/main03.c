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
	//scanf의 "%c"와 같은 기능을 한다
	//printf 둘 다 알면 좋음
	char c = getchar();
	putchar(c);

	return 0;
}