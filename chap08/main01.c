#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//공용체
union student {
	int num;
	double grade;
};

int main01() {
	printf("%d\n", sizeof(union student));// 4 -> 공용체는 가장 큰 사이즈의 변수의 크기를 가짐(더블 8바이트)
	
	union student s1= { 3 }; 

	printf("%d\n", s1.num); // 3

	s1.grade = 3.14;
	printf("%lf\n", s1.grade); // 3.14

	printf("%d\n", s1.num); // 깨짐 -> num과 grade가 동시에 존재할 수는 없음

	printf("%lf\n", s1.grade); //3.14


	return 0;
}