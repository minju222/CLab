#include <stdio.h>
#include <stdlib.h>

/*
�迭
����: ���� ������Ÿ�Ժ����� ������ ����
Ư��: ����� ���ÿ� ũ�Ⱑ �����Ǿ�����, ������ ũ��� ����� �� ����
*/


int main04() {
	int kor = 0, math = 0, eng = 0;
	int jumsu[3];
	printf("���� ���� ���� ������ �Է��ϼ���\n");
	scanf("%d %d %d", &jumsu[0], &jumsu[1], &jumsu[2]);

	printf("�Է¹��� ������ ");
	for (int i = 0; i < 3; i++) {
		printf("% d ", jumsu[i]);
	}
	printf("�Դϴ�");
	return 0;
}

