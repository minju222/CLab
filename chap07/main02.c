//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// ����ü ����� ���� ����
//
//typedef struct {
//	char name[20];
//	int age;
//	// ���� ����
//	// male, female
//	char* gender;
//} Person;

//int main() {
//	Person p;
//	strcpy(p.name, "�Ѹ�");
//	p.age = 7;
//	// gender�� ���� ���� ������� ����
//	p.gender = (char*)malloc(sizeof(char) * sizeof("female") + 1);
//	strcpy(p.gender, "female");
//
//	printf("%s %d %s\n", p.name, p.age, p.gender);
//
//	free(p.gender);
//
//	return 0;
//}