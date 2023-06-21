
#include <stdio.h>
int main08() {
	int i = 1, sum = 0, n;
	printf("양의 정수 n을 입력하세요: ");
	scanf("%d", &n);

	while (1) {

		sum += i;
		i++;
		if(i == n){
			break;
		}
	}
	printf("합은 %d\n", sum);
}
