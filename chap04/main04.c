#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main04() {
	printf("%p %p %s %c %c %c %c\n", "apple", "apple+1", "apple", "apple", *"apple", *("apple"+1), "apple"[1]);
	//00007FF67210ACC8  00007FF6EE6AAC10(char�� 1����Ʈ�� 1��ŭ ����) apple(%s�� �ּҸ� ����) ?(�ּҸ� c�� �� �ȳ���) a("apple"�� �ּҴϱ� �տ� *�ٿ��� ���) p(�ּ� ������ ��) p(�ּҿ� �ε���)

	//������ ���ڿ� ���� ����
	char* p = "apple";
	printf("%c\n", *(p + 4));//e

	//*(p + 4) = 'f';
	//printf("%s\n", p); //������ -> ������ ���ڿ� ������ �б� ���� �޸𸮿� ����Ǳ� ������ ���� �ٲ� �� ����
	// ������ ���ڿ� ���� �������� ������� ���ڿ��� ������ �����ص� ���� �޸� �ּҸ� ���� -> �ٲ� �� ����


	//�迭 ���ڿ� ���� ���� -> ���� ����
	char arr[6] = "apple";
	arr[4] = 'f';
	printf("%s\n", arr);//applf

	p = arr;
	*(p + 4) = 'e';
	printf("%s\n", p);//apple -> �迭 ���ڿ� ���� �϶��� ���� �ٲ� �� ����



}