#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void arrPrint(char **arr[], int len) {
	printf("%c", **arr);
	//printf("arrPrint: %d\n", sizeof(arr); //20

}

int main06() {
	char* arr[] = {"dul", "seot", "neot", "dasut"};
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sizeof(arr)); //32����Ʈ

	//�������� �迭�� �Լ��� ���ڷ� �ְԵǸ�
	//�Ķ���� Ÿ���� ���� �����ͷ� ���ǵȴ�
	arrPrint(arr, len);

	/* �Ķ���� Ÿ���� ���� �������̸� 2���� �迭�� �Է��ϸ� �ȵȴ�
	char test[3][3] = { "111", "222", "333" };
	arrPring(test, len);
	*/

	return 0;

}