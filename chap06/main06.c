#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** str) {
	while (*str != NULL) {
		printf("%s\n", *str);
		str++;
	}
}


//���� �Ҵ��� �̿��� ���ڿ� ó��

int main06() {
	char temp[30];

	//���ڿ� ������ �迭
	char* str[3];
	for (int i = 0; i < 3; i++) {
		printf("���ڿ��� �Է��ϼ���(30�� �̳�)\n");
		gets(temp);//temp(�޸� �ּ� 0x01)�� hello�� ����
		str[i] = (char*)malloc(strlen(temp) + 1); //hello���� �ϳ� �� �޸� ������ ����Ű�� �޸� �ּ�(0x02)�� str[i]�� ���� 
												  // -> +1�� �ϴ� ������ �ι���'\0'�� ����ϱ� ����
		strcpy(str[i], temp); // 0x01�޸� �ּҸ� str[i]�� ����
	}

	for (int i = 0; i < 3; i++) {
		printf("%s\n", str[i]);
	}

	//free ���
	free(str[0]);
	free(str[1]);
	free(str[2]);
	//�Ǵ�
	//for (int i = 0; i < 3; i++) {
	//	free(str[i]);
	//}

	return 0;

}