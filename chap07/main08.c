//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "person.h"
//
//int main() {
//	Person person1 = { "�Ѹ�", 7 };
//	Person person2 = { "�����", 8 };
//	Person person3 = { "��ġ", 9 };
//
//	Person* p1 = &person1;
//	Person* p2 = &person2;
//	Person* p3 = &person3;
//	//	����ü ����Ʈ �迭
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
//	Person** pp = ps; //pp�� ps�� �ּҸ� �޾ư�, pp�� ps�� ���� ����
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