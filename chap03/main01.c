#include <stdio.h>
int sum(int a, int b);

int main01() {
	int a = 10, b = 5;
	int c = sum(a, b);
	printf("%d + %d = %d \n", a, b, c);
	return 0;
}

int sum(int a, int b) {
	return a + b;
}