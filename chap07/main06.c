//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// ����ü ������ ����
//
//typedef struct {
//	char name[20];
//	int age;
//}Person;
//
//
//void printPerson(Person* pson) {
//	printf("%s %d\n", pson->name, pson->age); //�̷��� �ص� ��
//	pson->age++;
//
//}
//
//int main() {
//	int a = 10;
//	Person person = {"�Ѹ�", 7};
//
//	int* pa = &a;
//	Person* pson = &person;
//	printf("%d\n", sizeof(pson)); //8
//
//	// pson �̿��ؼ� person�� ����� �����ϱ�
//
//	printf("%s %d\n", (*pson).name, (*pson).age);//��ȣ �� ����� -> *pson.name�̸� pson.name�� ���� ����
//	printf("%s %d\n", pson->name, pson->age); //�̷��� �ص� ��
//
//	printPerson(&person); //�Ѹ�, 7->person�� �ּҸ� �ѱ�
//	printPerson(pson);//�Ѹ�, 8 -> ���� �þ(call by adress)
//
//	return 0;
//}
//
