#include <stdio.h>
#include <time.h>

int main03() {
	srand(time(NULL));//랜덤하게 난수를 생성하기 위함
	printf("%d %d %d %d %d %d",rand() % 44 + 1, rand() % 44 + 1, rand() % 44 + 1, rand() % 44 + 1, rand() % 44 + 1, rand() % 44 + 1); //1부터 45까지의 랜덤값이 뽑힘
	return 0;
}
