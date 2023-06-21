#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

void change(int a[5], int len) { //== void change(int* a, int len)
	printf("change a[5] = %d\n", sizeof(a)); //main은 20인데, change함수로 넘기면 8이 나옴 -> 배열이 진짜 넘어가는게 아니라 포인터 변수로 배열을 받아버리는 것(int* a)처럼
	//넘겨받은 배열의 size가 무조건 8byte(64비트 환경에서)가 나와서 sizeof/sizeof로 배열의 요소가 몇개인지 파악할 수 없음 -> 필요하다면 밖에서 len 계산해서 같이 넘김
}


int main14() {
	int a[5] = { 10,2,3,4,5 };
	int* pa = a; //배열의 이름은 주소니까 &a로 붙이면 안됨

	printf("%d\n", *pa); //10
	printf("%d\n", *(pa+1)); //2
	printf("%d\n", *(++pa)); //2 pa가 가리키고있는 데이터가 a의 두번째 요소 주소로 바뀜

	printf("main a[5] = %d\n", sizeof(a)); //20
	printf("main pa = %d\n", sizeof(pa));  //8
	int len = sizeof(a) / sizeof(int);
	change(a, len); 
	
	char* ch;
	int* in;
	double* dd;

	printf("%d %d %d\n", sizeof(ch), sizeof(in), sizeof(dd)); //8 8 8(포인트 변수의 크기는 자료형과 상관 없음)


	return 0;

}