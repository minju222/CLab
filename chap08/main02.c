#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 열거형
enum season{SPRING=1, SUMMER=5, FALL=7, WINTER};

int main02() {
	printf("%d %d %d %d\n", SPRING, SUMMER, FALL, WINTER); //0 1 2 3 -> 숫자에 의미를 부여한 것

	char* cp = NULL;
	enum seaon s; //enum을 변수로 받을 수도 있음
	s = FALL;
	switch(s) {
		case SPRING:
			cp = "flower";
			break;
		case SUMMER:
			cp = "swimming";
			break;
		case FALL:
			cp = "moutanin";
			break;
		case WINTER:
			cp = "ski";
			break;
	}
	printf("%s\n", cp); //ski
	return 0;
}