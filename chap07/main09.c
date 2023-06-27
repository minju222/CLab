//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "person.h"
//
//// 구조체 포인트 배열의 동적생성
//int main() {
//	Person* ps[3];
//	for (int i = 0; i < 3; i++) {
//		ps[i] = (Person*)malloc(sizeof(Person));
//	}
//
//	strcpy(ps[0]->name, "둘리");
//	ps[0]->age = 7;
//	strcpy(ps[0]->name, "또치");
//	ps[0]->age = 7;
//	strcpy(ps[0]->name, "도우너");
//	ps[0]->age = 7;
//
//	Person** pp = ps;
//	for (int i = 0; i < 3; i++) {
//		printf("%d %s\n", pp[i]->age, pp[i]->name);
//		printf("%d %s\n", (*(*(pp+i))).age, (*(*(pp + i))).name);
//		printf("%d %s\n", (*(pp + i))->age, (*(pp + i))->name);
//	}
//
//	//메모리 해제
//	free(ps[0]);
//	free(ps[1]);
//	free(ps[2]);
//}