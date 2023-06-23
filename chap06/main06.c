#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** str) {
	while (*str != NULL) {
		printf("%s\n", *str);
		str++;
	}
}


//동적 할당을 이용한 문자열 처리

int main06() {
	char temp[30];

	//문자열 포인터 배열
	char* str[3];
	for (int i = 0; i < 3; i++) {
		printf("문자열을 입력하세요(30자 이내)\n");
		gets(temp);//temp(메모리 주소 0x01)에 hello를 저장
		str[i] = (char*)malloc(strlen(temp) + 1); //hello보다 하나 긴 메모리 공간을 가르키는 메모리 주소(0x02)를 str[i]에 넣음 
												  // -> +1을 하는 이유는 널문자'\0'을 고려하기 위함
		strcpy(str[i], temp); // 0x01메모리 주소를 str[i]에 저장
	}

	for (int i = 0; i < 3; i++) {
		printf("%s\n", str[i]);
	}

	//free 방법
	free(str[0]);
	free(str[1]);
	free(str[2]);
	//또는
	//for (int i = 0; i < 3; i++) {
	//	free(str[i]);
	//}

	return 0;

}