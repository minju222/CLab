#include <stdio.h>
#include <time.h>

int main03() {
	srand(time(NULL));//�����ϰ� ������ �����ϱ� ����
	printf("%d %d %d %d %d %d",rand() % 44 + 1, rand() % 44 + 1, rand() % 44 + 1, rand() % 44 + 1, rand() % 44 + 1, rand() % 44 + 1); //1���� 45������ �������� ����
	return 0;
}
