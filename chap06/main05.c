#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//���� �Ҵ��� �̿��Ͽ� �迭�� �����ϸ�
//ũ�� ������ �� �� �ִ�

int main05() {
	int* p = (int*)malloc(sizeof(int) * 2); // p�� ��Ʈ ������ �ΰ��� �ش��ϴ� ũ���� �޸� ������ �����ؼ� �ش� �޸� ����� ���� �ּҰ� �����
	if (p == NULL) printf("�޸𸮰� �����մϴ�");
	memset(p, 0, sizeof(int) * 2); //p�� ����Ű�� �޸� ����� 0���� �ʱ�ȭ
	*p = 2;
	printf("%d\n", *p); // 2
	printf("%d\n", *(p+1)); // 0


	//�޸𸮸� �Ҵ��ϸ鼭 ����Ʈ �ʱ�ȭ�� ����
	p = (int*)calloc(2, sizeof(int)); //int size�� �ΰ��� �޸� ����� �Ҵ�
	*p = 3;
	*(p + 1) = 5;
	printf("%d %d\n", *p, p[1]); // 3 5


	// �޸��� ũ�⸦ ������ �� �ִ�
	printf("%u\n", p); //720
	p = (int*)realloc(p, sizeof(int) * 3);
	printf("%u\n", p); //240 ����Ű�� �޸� �ּҰ� �޶���

	printf("%d %d\n", *p, p[1]); // 3 5
	p[2] = 7;
	printf("%d %d %d\n", *p, p[1], p[2]); // 3 5 7

	free(p);

	return 0;

}