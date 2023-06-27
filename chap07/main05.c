//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////구조체 안에 구조체 선언하기
//
//typedef struct {
//	char name[20];
//	int age;
//}Person;
//
//typedef struct {
//	Person p;
//	int num;
//	char major[30];
//}Student;
//
//int main() {
//	Student s;
//	s.num = 2023001;
//	strcpy(s.p.name, "둘리");
//	s.p.age = 8;
//	strcpy(s.major, "computer");
//
//	printf("%d %d %s %s\n", s.num, s.p.age, s.p.name, s.major); // 2023001 8 둘리 computer
//
//	return 0;
//}
//
