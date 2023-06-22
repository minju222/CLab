#include <stdio.h>
#include <stdlib.h>

// 다차원 배열

int main01() {
	int i, j;
	int jumsu[2][3] = { {100,90,80}, {70, 60} };


	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", jumsu[i][j]); //100 90 80
										// 70 60 0 -> 마지막도 3칸짜리로 만들어져서 0으로 초기화
		}
		printf("\n");
	}

	printf("%d %d %d \n", sizeof(jumsu), sizeof(jumsu[0]), sizeof(jumsu[1])); //24(int 총 6칸) 12(int 총 3칸) 12
	int R = sizeof(jumsu) / sizeof(jumsu[0]);
	int C = sizeof(jumsu) / sizeof(int);//== intC = sizeof(jumsu) / sizeof(jumsu[0][0]);

	int* p = jumsu;
	printf("%d %d %d\n", *p, *(p + 2), *(p+3)); //100 80 70->다음 배열로 넘어감

	return 0;
}