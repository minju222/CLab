//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////����ü �迭�� �Լ� ���� ���(call by adress)
//
//typedef struct {
//	char name[20];
//	int age;
//}Person;
//
//
//void printPerson(Person* ps) {
//	printf("%d\n", sizeof(ps)); //8 ������
//	for (int i = 0; i < 3; i++) {
//		printf("%s %d\n", ps[i].name, ps[i].age);
//		ps[i].age++;
//	}
//}
//
//
//int main() {
//	Person ps[3];
//	Person p1 = { "�Ѹ�", 7 };
//	Person p2 = { "�����", 8 };
//	Person p3 = { "��ġ", 9 };
//	ps[0] = p1;
//	ps[1] = p2;
//	ps[2] = p3;
//
//	for (int i = 0; i < 3; i++) {
//		printf("%s %d\n", ps[i].name, ps[i].age);
//	}
//	printf("%d\n", sizeof(ps));//72((int 4byte+ char 20byte))*3)
//
//	printPerson(ps);
//	for (int i = 0; i < 3; i++) {
//		printf("%s %d\n", ps[i].name, ps[i].age);
//	} //printPerson �Լ� �����鼭 age �ϳ��� �þ���
//
//}