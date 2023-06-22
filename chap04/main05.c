#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//문자열 관련 함수
int main05() {
	char name1[] = "홍길동";
	char name2[] = { 'h', 'o', 'n', 'g', '\0' };
	char name3[20] = "long";
	char name4[20];

	printf("%d\n", strlen(name2)); //4
	printf("%d\n", strlen(name1)); //6 -> 한글은 한 글자 당 두 글자로 계산됨
	printf("%d\n", strcmp(name2, name3)); //-1 -> 같으면 0, 두 단어의 앞글자가 작으면 -1, 크면 1
	printf("%d\n", strcmp(name3, name2)); //1
	printf("%s\n", strcpy(name4, name2)); //hong->name2를 name4로 복사
	printf("%p\n", name4);
	printf("%p\n", strchr(name4, 'h'));//주소가 리턴됨


	

	return 0;
}