/*
 calc.c에는 함수들의 구현이 포함되어 있음
 헤더 파일 calc.h에는 함수들의 선언이 포함되어 있음
 main.c 파일에서 calc.h를 포함시켰기 때문에, calc.h에 정의된 함수들을 main.c에서 사용할 수 있음

 헤더 파일은 함수의 선언을 포함 -> 컴파일러에게 해당 함수들의 존재를 알려줌
 -> 소스 파일과 헤더 파일을 함께 컴파일하면, 컴파일러는 헤더 파일에 정의된 함수들을 실제 소스 파일에서 찾아서 매칭

 따라서 main.c에서 calc.h를 포함하고 있고, calc.h에는 calc.c에서 구현된 함수들의 선언이 포함되어 있기 때문에, main.c에서 calc.c에 정의된 함수들을 사용할 수 있음
*/
int add(int a, int b) {
	return a + b;
}
int minus(int a, int b) {
	return a - b;
}
int cross(int a, int b) {
	return a * b;
}
double divs(int a, int b) {
	return (double)a / (double)b;
}
