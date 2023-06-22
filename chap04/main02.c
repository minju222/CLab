#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"

// 아랫 부분 헤더 파일에 넣어둠
//int add(int a, int b);
//int minus(int a, int b);
//int cross(int a, int b);
//double divs(int a, int b);

int main02() {
	int a = 10, b = 5, res = 0;
	printf("%d\n", add(a, b));
	printf("%d\n", minus(a, b));
	printf("%d\n", cross(a, b));
	printf("%.2f\n", divs(a, b));
	return 0;
}
