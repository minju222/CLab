
#include <stdio.h>
int main08() {
	int i = 1, sum = 0, n;
	printf("���� ���� n�� �Է��ϼ���: ");
	scanf("%d", &n);

	while (1) {

		sum += i;
		i++;
		if(i == n){
			break;
		}
	}
	printf("���� %d\n", sum);
}
