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
	// 정적 선언 방식
	struct person p = { "hong", 21 };
	printf("%d\n", sizeof(struct person)); //구조체의 사이즈


	printf("%s %d\n", p.name, p.age);// hong 21
	p.age = 22;
	//p.name = "둘리"; // 변수명 복사가 안됨
	strcpy(p.name, "둘리");
	printf("%s %d\n", p.name, p.age);// 둘리 22

	return 0;
}
