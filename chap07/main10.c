//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct person {
//	char name[20];
//	int age;
//}Person;
//
////자기참조 구조체
//typedef struct list {
//	int num;
//	Person* p;
//	struct list* next;
//}List;
//
//int main() {
//	List a = { 10,0 }, b = { 20, 0 }, c = { 30, 0 };
//	a.p = (Person*)malloc(sizeof(Person));
//	b.p = (Person*)malloc(sizeof(Person));
//	c.p = (Person*)malloc(sizeof(Person));
//
//	strcpy(a.p->name, "둘리");
//	a.p->age = 7;
//	strcpy(b.p->name, "도우너");
//	b.p->age = 8;
//	strcpy(c.p->name, "또치");
//	c.p->age = 9;
//
//	a.next = &b;
//	b.next = &c;
//	List* cur = &a;
//
//	while (cur != NULL) {
//		printf("num : %d age : %d name : %s\n", cur->num, cur->p->age, cur->p->name);
//		cur = cur->next;
//	}
//
//	return 0;
//}