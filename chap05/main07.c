#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void finish(int arr2[2][2]) {//== int(*arr2)[2]
	printf("%d %d\n", sizeof(arr2), arr2[1][1]); // 8 7
	int** pp = &arr2;
	printf("%d\n", **pp);//1
}

int main07() {
	//������ �迭
	int arr[5];
	printf("%u %u %u %u\n", arr, &arr, arr+1, &arr+1); //�ּҰ� 28 28 32(���� ���) 48(&arr������ �ڱ� ��ü ������ ũ�� ��ŭ ����)

	int arr2[2][2] = { {1,3}, {5,7} };
	printf("%u %u %u %u\n", arr2, &arr2, arr2 + 1, &arr2 + 1); // ���� �ּ� 08 08 16({1,3}���� �ּ�) 24
	printf("%u %u %u %u\n", arr2, &arr2, arr2[1], &arr2[1]); //  88 88 96 96

	//�迭 ������
	int(*p)[2] = arr2;
	printf("%u %u %u %d %d\n", p, *p, **p, p[1][1], *(*(p+1))); // ���� �ּ� ���� �ּ� 1 7 5

	printf("%d\n", sizeof(p)); //8����Ʈ

	printf("%d\n", sizeof(arr2)); //16����Ʈ
	finish(arr2);
	return 0;

}