#include <stdio.h>
#include <stdlib.h>

int main05() {
	int arr[5] = { 1,3,5,7,9};
	//int arr[5] = { 1,3,5,7}; //이러면 마지막은 0이 자동으로 들어감
	//int arr[] = { 1,3,5,7 }; //이러면 크기 네개짜리로 선언이 되어진 것
	//arr[0] = 1;
	//arr[1] = 3;
	//arr[2] = 5;
	//arr[3] = 7;
	//arr[4] = 9;
	//arr[5] = 10; -> 이거도 되는데 VS에서는 안뎀
	int i = 0;
	for (; i < 5; i ++ ) {
		printf("%d ", arr[i]);
	}
}