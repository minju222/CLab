#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

//문자 배열
int main09() {
	//char str[10];
	int i = 0;
	int size = 0;

	char str[10] = "hello";

	//str[0] = 'h';
	//str[1] = 'e';
	//str[2] = 'l';
	//str[3] = 'l';
	//str[4] = 'o';

	size = sizeof(str) / sizeof(char);
	//for (; i < size; i++) {
	//	printf("%c ", str[i]); //h e l l o ????? 출력
	//}

	//printf("%s\n", str); //hello
	
	str[3] = '\0';
	printf("%s\n", str); //hel -> \0나오기 전까지만 읽음
	printf("%s %d\n", str, strlen(str)); //hel 3 -> \0 나오기 전까지의 문자열의 길이

	return 0;
}