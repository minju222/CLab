/*
 * Main07.c
 *
 *  Created on: 2016. 6. 23.
 *      Author: 315-08
 */

#include<stdio.h>
#include<stdlib.h>
// ���� ���α׷�
// �μ��� �Է¹޾� ��Ģ����(+ - * / %) �� ���ϴ� ���α׷�
// �Է� 3 + 5
// ��� 3 + 5 = 8

int main07() {
	int op1, op2, result; // �Է¹��� �� ���� ����
	char op;
	//int i = 0;

	while (1) {
		printf("����� ���� �Է��ϼ��� ex) 3 + 4\n");
		//i = i+1;
		//i+=1;
		//i++;
		printf("����� 0 0 0 �� �Է��ϼ���\n");
		fflush(stdout);
		scanf("%d %c %d", &op1, &op, &op2);

		if(op1 == 0 && op == '0' && op2 == 0){
			printf("���α׷��� ����Ǿ����ϴ�.\n");
			break;
		}

		switch (op) {
		case '+':
			result = op1 + op2;
			printf("%d %c %d = %d\n", op1, op, op2, result);
			break;
		case '-':
			result = op1 - op2;
			printf("%d %c %d = %d\n", op1, op, op2, result);
			break;
		case '*':
			result = op1 * op2;
			printf("%d %c %d = %d\n", op1, op, op2, result);
			break;
		case '/':
			result = op1 / op2;
			printf("%d %c %d = %d\n", op1, op, op2, result);
			break;
		case '%':
			result = op1 % op2;
			printf("%d %c %d = %d\n", op1, op, op2, result);
			break;
		default:
			printf("�����ڸ� �߸� �Է��ϼ̽��ϴ�.\n");
			break;
		}

	}
	return 0;
}

