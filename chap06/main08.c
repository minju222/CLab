#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#pragma pack(1)

/*
	userdifine datatype
*/


struct person {
	char name[20+1];
	int age;
};


int main08() {
	int a;
	// ���� ���� ���
	struct person p = { "hong", 21 };
	printf("%d\n", sizeof(struct person)); //����ü�� ������


	printf("%s %d\n", p.name, p.age);// hong 21
	p.age = 22;
	//p.name = "�Ѹ�"; // ������ ���簡 �ȵ�
	strcpy(p.name, "�Ѹ�");
	printf("%s %d\n", p.name, p.age);// �Ѹ� 22

	return 0;
}
