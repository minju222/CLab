#include <stdio.h>

int main00() {
	printf("Hello C \n");
	return 0;
}

/*
	1. 전처리 단계: main.c -> main.i
	2. 컴파일 단계: main.i -> main.s (어셈블리 파일로 변환)
	3. 어셈블 단계: main.s -> main.o (0101 코드로 변환)
	4. 링크 단계: .o -> .exe (.o 파일들 여러개를 하나의 실행 파일로 만듬 -> windows 실행파일) & (동적파일은 .dll / 정적 파일은 .a(라이브러리))


*/