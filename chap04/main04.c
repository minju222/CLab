#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main04() {
	printf("%p %p %s %c %c %c %c\n", "apple", "apple+1", "apple", "apple", *"apple", *("apple"+1), "apple"[1]);
	//00007FF67210ACC8  00007FF6EE6AAC10(char은 1바이트라서 1만큼 증가) apple(%s는 주소를 받음) ?(주소를 c로 찍어서 안나옴) a("apple"이 주소니까 앞에 *붙여서 출력) p(주소 연산의 값) p(주소에 인덱싱)

	//포인터 문자열 변수 선언
	char* p = "apple";
	printf("%c\n", *(p + 4));//e

	//*(p + 4) = 'f';
	//printf("%s\n", p); //에러남 -> 포인터 문자열 변수는 읽기 전용 메모리에 저장되기 때문에 값을 바꿀 수 없음
	// 포인터 문자열 변수 선언으로 만들어진 문자열은 여러번 생성해도 같은 메모리 주소를 참조 -> 바꿀 수 없음


	//배열 문자열 변수 선언 -> 변경 가능
	char arr[6] = "apple";
	arr[4] = 'f';
	printf("%s\n", arr);//applf

	p = arr;
	*(p + 4) = 'e';
	printf("%s\n", p);//apple -> 배열 문자열 변수 일때는 값을 바꿀 수 있음



}