#include <stdio.h>

#define PI 3.141592
#define LIMIT 100
#define MSG "passed!!1"
#define ERR_PRINT printf("error �� ǥ���մϴ�!\n")

int main04() {
	double radius, area;

	printf("�������� �Է��ϼ���\n");
	scanf("%lf", &radius);
	area = PI * radius * radius;

	if (radius > LIMIT)  ERR_PRINT; 
	else  printf("���� ũ��� %.2lf (%s)\n", area, MSG); 

	return 0;
}


