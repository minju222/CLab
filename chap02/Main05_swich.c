
#include<stdio.h>
#include<stdlib.h>

int main05() {
	int a;
	printf("������ �Է��ϼ��� [0 ~ 9] \n");
	fflush(stdout);
	scanf("%d", &a);

	switch (a) {
	case 0:
		printf("�Է��Ͻ� ���� 0 �Դϴ�.\n");
		break;
	case 1:
		printf("�Է��Ͻ� ���� 1 �Դϴ�.\n");
		break;
	case 2:
		printf("�Է��Ͻ� ���� 2 �Դϴ�.\n");
		break;
	case 3:
		printf("�Է��Ͻ� ���� 3 �Դϴ�.\n");
		break;
	case 4:
		printf("�Է��Ͻ� ���� 4 �Դϴ�.\n");
		break;
	default:
		printf("default �Դϴ�.\n");
		break;
	}
	return 0;
}

