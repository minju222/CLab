#include <stdio.h>
#include <stdlib.h>
#include <string.h>


extern ga; //ga��� ������ �ٸ� .c ���Ͽ� ����Ǿ� �־, �����ٰ� ���ڴٴ� �ǹ�
extern sa; // static ������ �о���� �� �� ����

int main06_1() {
	printf("%d\n", ga);//10
	//printf("%d\n", sa);//����, static ������ �����ͼ� �� �� ����

}