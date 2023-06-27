//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "person.h"
//
////typedef struct {
////	char name[20];
////	int age;
////}Person;
//
//// 구조체의 동적 메모리 할당
//
//int main() {
//	//정적 선언 방식
//	Person person = { "둘리", 7 };
//
//	//동적 선언 방식
//	//메모리 할당
//	Person* p = (Person*)malloc(sizeof(Person)); //heap memory
//	
//	(*p).age = 10;
//	p->age = 20;
//	strcpy(p->name, "둘리");
//	
//	printf("%d %s\n", p->age, p->name); //20 둘리
//
//	free(p);
//	return 0;
//}