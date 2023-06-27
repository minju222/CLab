//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 구조체 포인터 변수
//
//typedef struct {
//	char name[20];
//	int age;
//}Person;
//
//
//void printPerson(Person* pson) {
//	printf("%s %d\n", pson->name, pson->age); //이렇게 해도 됨
//	pson->age++;
//
//}
//
//int main() {
//	int a = 10;
//	Person person = {"둘리", 7};
//
//	int* pa = &a;
//	Person* pson = &person;
//	printf("%d\n", sizeof(pson)); //8
//
//	// pson 이용해서 person의 멤버에 접근하기
//
//	printf("%s %d\n", (*pson).name, (*pson).age);//괄호 꼭 써야함 -> *pson.name이면 pson.name이 먼저 읽힘
//	printf("%s %d\n", pson->name, pson->age); //이렇게 해도 됨
//
//	printPerson(&person); //둘리, 7->person의 주소를 넘김
//	printPerson(pson);//둘리, 8 -> 나이 늘어남(call by adress)
//
//	return 0;
//}
//
