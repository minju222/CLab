
#include <stdio.h>
#include <stdlib.h>

int main09(void) {
	int res;
	int i = 1;   // �ʱ��
	while (i <= 9) {
		// ���ǽ�
		res = 2 * i;
		printf("2 * %d = %d\n", i, res);
		i++; //������
	}

	return 0;
}
