#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void pointer
//Ÿ���� �������� ���� �����ͺ���

int main02() {
	int a = 10;
	char* p = &a; //char�� �����ϰ� int �ּ� �޾Ƶ� ���� �ȳ�
	int* pa = (int*)p;//int������ ������ ����Ʈ���� ����ȯ ����

	printf("%u %u\n", p, p + 1); //�ּ� 44, 45 -> ������ �ȳ����� int 4����ư�� char �����ͷ� �����ؼ� �ּҰ� �����ϸ� �ѹ���Ʈ�� ����

	double b = 3.14;

	// void* Ÿ�� ������ ��� Ÿ���� ������ ī��ų ���� ������
	// ����ϱ� ���ؼ��� ����ȯ�� ���־�� �Ѵ�
	void* vp;
	vp = &a;
	printf("%d\n", *(int*) vp);
	vp = &b;
	printf("%.2lf\n", *(double*)vp);






}