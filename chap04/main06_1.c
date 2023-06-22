#include <stdio.h>
#include <stdlib.h>
#include <string.h>


extern ga; //ga라는 변수는 다른 .c 파일에 선언되어 있어서, 가져다가 쓰겠다는 의미
extern sa; // static 변수는 읽어봐서 쓸 수 없음

int main06_1() {
	printf("%d\n", ga);//10
	//printf("%d\n", sa);//오류, static 변수는 가져와서 쓸 수 없음

}