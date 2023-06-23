#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//동적 할당을 이용하여 배열을 선언하면
//크기 변경을 할 수 있다

int main05() {
	int* p = (int*)malloc(sizeof(int) * 2); // p에 인트 사이즈 두개에 해당하는 크기의 메모리 공간을 마련해서 해당 메모리 블록의 시작 주소가 저장됨
	if (p == NULL) printf("메모리가 부족합니다");
	memset(p, 0, sizeof(int) * 2); //p가 가리키는 메모리 블록을 0으로 초기화
	*p = 2;
	printf("%d\n", *p); // 2
	printf("%d\n", *(p+1)); // 0


	//메모리를 할당하면서 디폴트 초기화도 진행
	p = (int*)calloc(2, sizeof(int)); //int size로 두개의 메모리 블록을 할당
	*p = 3;
	*(p + 1) = 5;
	printf("%d %d\n", *p, p[1]); // 3 5


	// 메모리의 크기를 변경할 수 있다
	printf("%u\n", p); //720
	p = (int*)realloc(p, sizeof(int) * 3);
	printf("%u\n", p); //240 가르키는 메모리 주소가 달라짐

	printf("%d %d\n", *p, p[1]); // 3 5
	p[2] = 7;
	printf("%d %d %d\n", *p, p[1], p[2]); // 3 5 7

	free(p);

	return 0;

}