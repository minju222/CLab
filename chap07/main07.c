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
//// ����ü�� ���� �޸� �Ҵ�
//
//int main() {
//	//���� ���� ���
//	Person person = { "�Ѹ�", 7 };
//
//	//���� ���� ���
//	//�޸� �Ҵ�
//	Person* p = (Person*)malloc(sizeof(Person)); //heap memory
//	
//	(*p).age = 10;
//	p->age = 20;
//	strcpy(p->name, "�Ѹ�");
//	
//	printf("%d %s\n", p->age, p->name); //20 �Ѹ�
//
//	free(p);
//	return 0;
//}