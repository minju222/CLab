//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "person.h"
//
//// ����ü ����Ʈ �迭�� ��������
//int main() {
//	Person* ps[3];
//	for (int i = 0; i < 3; i++) {
//		ps[i] = (Person*)malloc(sizeof(Person));
//	}
//
//	strcpy(ps[0]->name, "�Ѹ�");
//	ps[0]->age = 7;
//	strcpy(ps[0]->name, "��ġ");
//	ps[0]->age = 7;
//	strcpy(ps[0]->name, "�����");
//	ps[0]->age = 7;
//
//	Person** pp = ps;
//	for (int i = 0; i < 3; i++) {
//		printf("%d %s\n", pp[i]->age, pp[i]->name);
//		printf("%d %s\n", (*(*(pp+i))).age, (*(*(pp + i))).name);
//		printf("%d %s\n", (*(pp + i))->age, (*(pp + i))->name);
//	}
//
//	//�޸� ����
//	free(ps[0]);
//	free(ps[1]);
//	free(ps[2]);
//}