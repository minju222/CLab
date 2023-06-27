//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "person.h"
//
//int main() {
//	Person person1 = { "둘리", 7 };
//	Person person2 = { "도우너", 8 };
//	Person person3 = { "또치", 9 };
//
//	Person* p1 = &person1;
//	Person* p2 = &person2;
//	Person* p3 = &person3;
//	//	구조체 포인트 배열
//	Person* ps[3];
//
//	ps[0] = p1;
//	ps[1] = p2;
//	ps[2] = p3;
//
//	for (int i = 0; i < 3; i++) {
//		printf("%d %s\n",(*ps[i]).age, ps[i]->name);
//	}
//
//	Person** pp = ps; //pp는 ps의 주소를 받아감, pp랑 ps랑 같은 수준
//	for (int i = 0; i < 3; i++) {
//		printf("%d %s\n", pp[i]->age, pp[i]->name);
//		printf("%d %s\n", (*(*(pp + i))).age, (*(*(pp + i))).name);
//		printf("%d %s\n", (*(pp + i))->age, (*(pp + i))->name);
//
//	}
//
//void printPerson(Person** pp) {
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d %s\n", pp[i]->age, pp[i]->name);
//		printf("%d %s\n", (*(pp + i))->age, (*(pp + i))->name);
//		printf("%d %s\n", (*(*(pp + i))).age, (*(*(pp + i))).name);
//	}
//
//}