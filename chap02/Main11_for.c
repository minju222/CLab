#include <stdio.h>


int main11(void) {
	int res;
	int i = 1;   // ÃÊ±â½Ä
	int j = 2;

	for(j=2;j<=9;j++) {
		if(j== 3 || j == 7){
			continue;
		}
		for (i = 1; i <= 9; i++) {
			res = j * i;
			printf("%d * %d = %d\n",j, i, res);

		}
	}

	return 0;
}
