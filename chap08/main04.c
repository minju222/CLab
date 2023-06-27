#include <stdio.h>

#define PI 3.141592
#define LIMIT 100
#define MSG "passed!!1"
#define ERR_PRINT printf("error 를 표시합니다!\n")

int main04() {
	double radius, area;

	printf("반지름을 입력하세요\n");
	scanf("%lf", &radius);
	area = PI * radius * radius;

	if (radius > LIMIT)  ERR_PRINT; 
	else  printf("원의 크기는 %.2lf (%s)\n", area, MSG); 

	return 0;
}


