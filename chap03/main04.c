#include <stdio.h>
#include <stdlib.h>

/*
배열
정의: 같은 데이터타입변수의 순서적 나열
특성: 선언과 동시에 크기가 결정되어지고, 결정된 크기는 변경될 수 없다
*/


int main04() {
	int kor = 0, math = 0, eng = 0;
	int jumsu[3];
	printf("국어 수학 영어 점수를 입력하세요\n");
	scanf("%d %d %d", &jumsu[0], &jumsu[1], &jumsu[2]);

	printf("입력받은 점수는 ");
	for (int i = 0; i < 3; i++) {
		printf("% d ", jumsu[i]);
	}
	printf("입니다");
	return 0;
}

