#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ������
enum season{SPRING=1, SUMMER=5, FALL=7, WINTER};

int main02() {
	printf("%d %d %d %d\n", SPRING, SUMMER, FALL, WINTER); //0 1 2 3 -> ���ڿ� �ǹ̸� �ο��� ��

	char* cp = NULL;
	enum seaon s; //enum�� ������ ���� ���� ����
	s = FALL;
	switch(s) {
		case SPRING:
			cp = "flower";
			break;
		case SUMMER:
			cp = "swimming";
			break;
		case FALL:
			cp = "moutanin";
			break;
		case WINTER:
			cp = "ski";
			break;
	}
	printf("%s\n", cp); //ski
	return 0;
}