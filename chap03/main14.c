#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

void change(int a[5], int len) { //== void change(int* a, int len)
	printf("change a[5] = %d\n", sizeof(a)); //main�� 20�ε�, change�Լ��� �ѱ�� 8�� ���� -> �迭�� ��¥ �Ѿ�°� �ƴ϶� ������ ������ �迭�� �޾ƹ����� ��(int* a)ó��
	//�Ѱܹ��� �迭�� size�� ������ 8byte(64��Ʈ ȯ�濡��)�� ���ͼ� sizeof/sizeof�� �迭�� ��Ұ� ����� �ľ��� �� ���� -> �ʿ��ϴٸ� �ۿ��� len ����ؼ� ���� �ѱ�
}


int main14() {
	int a[5] = { 10,2,3,4,5 };
	int* pa = a; //�迭�� �̸��� �ּҴϱ� &a�� ���̸� �ȵ�

	printf("%d\n", *pa); //10
	printf("%d\n", *(pa+1)); //2
	printf("%d\n", *(++pa)); //2 pa�� ����Ű���ִ� �����Ͱ� a�� �ι�° ��� �ּҷ� �ٲ�

	printf("main a[5] = %d\n", sizeof(a)); //20
	printf("main pa = %d\n", sizeof(pa));  //8
	int len = sizeof(a) / sizeof(int);
	change(a, len); 
	
	char* ch;
	int* in;
	double* dd;

	printf("%d %d %d\n", sizeof(ch), sizeof(in), sizeof(dd)); //8 8 8(����Ʈ ������ ũ��� �ڷ����� ��� ����)


	return 0;

}