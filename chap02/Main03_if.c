#include <stdio.h>
int main03() {

	int a, b;
	printf("두 정수를 입력하세요\n");
	fflush(stdout);
	scanf("%d %d", &a, &b);
	fflush(stdout);

	if(a > b){
		printf("%d > %d",a,b);
	}else if(a < b){
		printf("%d < %d",a,b);
	}else {
		printf("%d == %d",a,b);
	}
    return 0;
}
