#include <stdio.h>
#include <stdlib.h>

// ������ �迭

int main01() {
	int i, j;
	int jumsu[2][3] = { {100,90,80}, {70, 60} };


	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", jumsu[i][j]); //100 90 80
										// 70 60 0 -> �������� 3ĭ¥���� ��������� 0���� �ʱ�ȭ
		}
		printf("\n");
	}

	printf("%d %d %d \n", sizeof(jumsu), sizeof(jumsu[0]), sizeof(jumsu[1])); //24(int �� 6ĭ) 12(int �� 3ĭ) 12
	int R = sizeof(jumsu) / sizeof(jumsu[0]);
	int C = sizeof(jumsu) / sizeof(int);//== intC = sizeof(jumsu) / sizeof(jumsu[0][0]);

	int* p = jumsu;
	printf("%d %d %d\n", *p, *(p + 2), *(p+3)); //100 80 70->���� �迭�� �Ѿ

	return 0;
}