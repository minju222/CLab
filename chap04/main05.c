#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//���ڿ� ���� �Լ�
int main05() {
	char name1[] = "ȫ�浿";
	char name2[] = { 'h', 'o', 'n', 'g', '\0' };
	char name3[20] = "long";
	char name4[20];

	printf("%d\n", strlen(name2)); //4
	printf("%d\n", strlen(name1)); //6 -> �ѱ��� �� ���� �� �� ���ڷ� ����
	printf("%d\n", strcmp(name2, name3)); //-1 -> ������ 0, �� �ܾ��� �ձ��ڰ� ������ -1, ũ�� 1
	printf("%d\n", strcmp(name3, name2)); //1
	printf("%s\n", strcpy(name4, name2)); //hong->name2�� name4�� ����
	printf("%p\n", name4);
	printf("%p\n", strchr(name4, 'h'));//�ּҰ� ���ϵ�


	

	return 0;
}