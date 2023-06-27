#include <stdio.h>

int main06() {
	printf("날짜 : %s 시간 : %s\n", __DATE__, __TIME__);
	printf("파일 : %s \n함수 : %s, 라인 : %d\n", __FILE__
					, __FUNCTION__
					, __LINE__);

	return 0;

}