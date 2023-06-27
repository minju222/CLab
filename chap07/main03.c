//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////구조체 배열
//
//typedef struct {
//	char name[20];
//	int age;
//}Person;
//
//int main() {
//	Person ps[10] = {{"둘리", 7},{"도우너", 8},{"또치", 9}}; //10개 중에 구조체 3개만 초기화함
//	printf("%d\n", sizeof(ps));//240((int 4byte+ char 20byte))*10)
//
//	for (int i = 0; i < 3; i++) {
//		printf("%s %d\n", ps[i].name, ps[i].age);
//	}
//	
//	//사용자 입력
//	int count = 0;
//	printf("입력하실 갯수를 입력하세요\n");
//	scanf("%d", &count);
//
//	for (int i = 0; i < count; i++) {
//		printf("이름을 입력하세요\n");
//		scanf("%s", ps[i].name);//name은 배열이라 이름이 주소라 & 필요 없음
//		printf("나이를 입력하세요\n");
//		scanf("%d", &ps[i].age);//int형이라서 주소로 받아야해서 & 필요함
//	}
//
//	for (int i = 0; i < count; i++) {
//		printf("%s %d\n", ps[i].name, ps[i].age);
//	}
//
//
//}