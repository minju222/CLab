
#include <stdio.h>
#include <stdlib.h>

int main10(void) {
	int i;   // �ʱ��
	int sum=0;

	for (i = 1; i <= 100; i++) {
		if(i%2 == 0){
			sum += i;
		};
	}
	printf("1 ~ 100 �� ���� = %d\n", sum);

	return 0;
}
