#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

int main() {
	char a = 'd';
	printf("%d %c\n", &a, a); //1366292948 d

	char* pc = &a;
	printf("%d %c\n", pc, *pc);	//1366292948 d


	char str[10] = "hello";
	char* pstr = str;
	printf("%s\n", pstr);//hello
	
	char str2[2][10] = { "hello", "scsa" };
	char* pstr2 = str2;
	printf("%p %p %c\n", str2, str2[0], str2[0][0]); //000000ebbc8ff508 000000ebbc8ff508 h
	printf("%p %p %c %c\n", pstr2, *pstr2, *pstr2, *(pstr2+5)); //000000ebbc8ff508 0000000000000068 h s(scsa¿« s)
	

	char str2[2][5] = { "hello", "scsa" };
	char* pstr2 = str2;
	printf("%p %p %c\n", str2, str2[0], str2[0][0]); //000000EBBC8FF508 000000EBBC8FF508 h
	printf("%p %p %c %c\n", pstr2, *pstr2, *pstr2, *(pstr2 + 5)); //000000EBBC8FF508 0000000000000068 h s(scsa¿« s)



	return 0;
}