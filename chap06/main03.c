#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��������
int ga = 5;

int main03() {
	// ��������
	// ���� ���� ��� -> int�� �����ϸ� �ڵ����� 4����Ʈ ���� ��Ƽ� ��
	// �Լ� ������ �޸� ������
	int a = 10;

	// ���� ���� ���
	void* vp = malloc(4); //heap ������ 4����Ʈ ������ �Ҵ��, return type�� void pointer -> �ּҸ� ������
	*(int* )vp = 10; //void pointer�� int�� pointer�� ����ȯ �ϰ�, �� �ּҿ� 10�� �־���
	printf("%d\n", *(int*)vp); //10

	int* p = (int*)malloc(4);
	*p = 5;
	printf("%d\n", *p); //5

	//���� ���� ����� �޸� ������ free �Լ��� �̿��Ͽ� �������־�� �Ѵ�.
	free(p);
	printf("%d\n", *p); //free ���Ŀ� �����ⵥ���Ͱ� �� �� ����

	malloc(sizeof(double));


	return 0;
}