#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

//문자 배열
int main10() {
	//char str[10];
	int i = 0;
	int size = 0;

	char str[10] = "hello";
	char str2[10];

	// str2 = str; //불가능
	strcpy(str2, str); //
	printf("%s %d\n", str2, strlen(str)); 
	printf("%d\n", strcmp( str2, str)); //같지 않으면 음수나 양수 반환, 같으면 0 반환

	return 0;
}