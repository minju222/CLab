
#define _CRT_SECURE_NO_WARNINGS

// console �κ��� ���� �Է¹޴� ���α׷�
// fflush ������
#include<stdio.h>
#include<stdlib.h>
int main03(){
	int a, b;
	printf("a �� b �� �Է��ϼ���\n");
	scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);

	printf("���ڸ� �Է��ϼ���\n");
	char c;
	// fflush(stdout); 	//���ۿ� �Էµ� ���Ͱ��� �о ������
	while (getchar() != '\n'); // \n�� �ƴ� �͸� ���ڷ� ����
	scanf("%c",&c);
	printf("%c",c);
	return 0;
}
