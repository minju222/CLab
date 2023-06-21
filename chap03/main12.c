#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

//문자 배열
int main12() {
	char arr[2][10] = { "hello", "scsa" };

	printf("%s\n", arr[0]); //hello %s에는 주소값을 줘야함
	printf("%s\n", *arr);//hello
	printf("%s\n", *(arr + 1));//scsa

	printf("%c\n", *((*arr) + 1)); //e %c는 값을 넘겨야함
	printf("%c\n", *(*(arr + 1) + 3)); //a





	return 0;
}