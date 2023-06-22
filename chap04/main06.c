#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//변수의 생명 주기

/* 
	지역 변수: scope안에서 선언되어지는 변수, scope 종료되면 소멸, 활성영역(생성된 scope안에서만 사용할 수 있다)
	전역 변수: scope밖에서 선언되어지는 변수,프로세스가 종료되면 소멸, 전체 영역에서 사용 가능

	만약 전역변수와 지역변수의 이름 충돌이 일어나면, 지역변수가 사용된다


	정적 전역 변수: 자신이 선언된 파일 안에서 사용 가능한 변수
	정적 지역 변수: 함수가 끝나도 메모리에서 사라지지 않는 변수

	레지스터 뱐수:레지스터 영역(cpu안에 메모리에서 버스로 데이터를 가지고와서 활용하는 영역)에 선언되어지는 변수
	              -> 속도가 더 빠름, 하지만 레지스터 영역에 반드시 선언된다고 보장될 수 없음(레지스터 영역이 굉장히 작기 때문) 
				  특징1. 주소를 구할 수 없음(ex. int* p = &i 같이 포인터 찍어서 작업이 불가능함)
				  특징2. 전역으로 선언할 수 없음(레지스터 공간은 경쟁이 치열해서 이럴 공간이 없고, 충돌이 날 수 있음)

*/


//전역 변수
int ga = 10;

//정적 전역 변수
static sa = 20;

void funcA() {
	//int ga = 0;
	ga++;
	printf("%d\n", sa);//20
	//printf("%d\n", ga);//1
	printf("%d\n", ga); //11
}

void funcB() {
	register int i;
	auto sum = 0; //지역변수, auto 생략가능
	for (i = 1; i < 100000; i++) {
		sum += i;
	}
	printf("%d\n", sum);
}

void change() {
	int imsi = 0;

	//정적 지역 변수
	static int res = 0;
	++imsi;
	++res;
	printf("%d : %d\n", res, imsi);
}

int* sum(int a, int b) { //주소를 return 할거라서 int형 포인트 타입으로 넘김
	static int res;
	res = a + b;
	return &res;
}

int main06() {
	auto int a = 10;
	funcA();
	printf("%d\n", sa);//20

	printf ("%d\n", ga);//11

	//정적 지역 변수-> 함수가 끝나도 사라지지 않고 데이터 유지 중
	printf("----------정적 지역 변수----------\n");
	change(); // 1 : 1
	change(); // 2 : 1
	change(); // 3 : 1

	int* res = sum(10, 5); //주소값을 받을 수 있는 정수형 포인트 변수로 받음
	printf("%d\n", *res); //static int res로 선언하지 않으면 15는 나왔지만 sum 함수가 끝나서 메모리는 릴리즈되어버림, 다만 그 메모리를 아직 누가 쓰지 않아서 데이터가 남아있어서 불러올 수 있었던 것

	return 0;
}
