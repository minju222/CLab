//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 구조체 멤버의 동적 생성
//
//typedef struct {
//	char name[20];
//	int age;
//	// 동적 생성
//	// male, female
//	char* gender;
//} Person;

//int main() {
//	Person p;
//	strcpy(p.name, "둘리");
//	p.age = 7;
//	// gender를 동적 선언 방식으로 구현
//	p.gender = (char*)malloc(sizeof(char) * sizeof("female") + 1);
//	strcpy(p.gender, "female");
//
//	printf("%s %d %s\n", p.name, p.age, p.gender);
//
//	free(p.gender);
//
//	return 0;
//}