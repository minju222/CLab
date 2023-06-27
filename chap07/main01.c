//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef int INT;
//
//typedef struct person {
//	char name[20];
//	int age;
//} Person; //person타입의 구조체를 Person으로 define함
//
//void printPerson(Person p) { //type definde 안했다면 struct 구조체 이름 구조체 변수로 받아야함 (ex. strcut person p1)
//	printf("%s %d %u\n", p.name, p.age, sizeof(p)); //size 24 -> 이름이 값을 복사해 가는 느낌...
//	strcpy(p.name, "도우너");
//	printf("%s %d %u\n", p.name, p.age, sizeof(p)); //size 24
//
//}
//
//int main() {
//	struct person p = { "또치", 6 };
//	printf("%u %u %u\n", p, &p, sizeof(p)); // 두 값이 다름, size 24 구조체의 변수명은 안에 들어있는 멤버들의 주소는 아님
//	printPerson(p);
//	printf("%s %d %u\n", p.name, p.age, sizeof(p)); //이름 도우너로 안바뀜
//
//
//	int a = 10;
//	INT b = 20; //typedef로 int를 INTf로 쓰겠다고 해서 오류 안남
//
//	Person p1 = { "둘리", 7 }; //struct person 대신 Person 쓰면 됨
//	printf("%s %d\n", p1.name, p1.age);
//
//	return 0;
//}
