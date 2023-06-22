#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printPan(int pan[19][19]) {
	printf("\n     0 1 2 3 4 5 6 7 8 9101112131415161718\n");
	printf("-------------------------------------------\n");
	for (int i = 0; i < 19; i++) {
		printf("%2d | ", i);
		for (int j = 0; j < 19; j++) {
			if (pan[i][j] == 1) {
				printf("��");
			}
			else if (pan[i][j] == 2) {
				printf("��");
			}
			else {
				printf("��");
			}
		}
		printf("|\n");
	}
	printf("-------------------------------------------\n");
}

int isWin(int pan[19][19], int r, int c) {
    int player = pan[r][c];  // ���� �÷��̾� (1: ��, 2: ��)
    int count;  // ���� ���� ����

    // ���� ���� �˻�
    count = 1;  // ���� ���� ������ ���� �����ϹǷ� count�� 1�� �ʱ�ȭ
    int i = c - 1;
    while (i >= 0 && pan[r][i] == player) {  // ���� ���� �˻�
        count++;
        i--;
    }
    i = c + 1;
    while (i < 19 && pan[r][i] == player) {  // ������ ���� �˻�
        count++;
        i++;
    }
    if (count == 5) {
        return 1;  // �¸�
    }

    // ���� ���� �˻�
    count = 1;
    int j = r - 1;
    while (j >= 0 && pan[j][c] == player) {  // ���� ���� �˻�
        count++;
        j--;
    }
    j = r + 1;
    while (j < 19 && pan[j][c] == player) {  // �Ʒ��� ���� �˻�
        count++;
        j++;
    }
    if (count == 5) {
        return 1;  // �¸�
    }

    // �밢�� ���� (\) �˻�
    count = 1;
    i = c - 1;
    j = r - 1;
    while (i >= 0 && j >= 0 && pan[j][i] == player) {  // ���� �� ���� �˻�
        count++;
        i--;
        j--;
    }
    i = c + 1;
    j = r + 1;
    while (i < 19 && j < 19 && pan[j][i] == player) {  // ������ �Ʒ� ���� �˻�
        count++;
        i++;
        j++;
    }
    if (count == 5) {
        return 1;  // �¸�
    }

    // �밢�� ���� (/) �˻�
    count = 1;
    i = c - 1;
    j = r + 1;
    while (i >= 0 && j < 19 && pan[j][i] == player) {  // ���� �Ʒ� ���� �˻�
        count++;
        i--;
        j++;
    }
    i = c + 1;
    j = r - 1;
    while (i < 19 && j >= 0 && pan[j][i] == player) {  // ������ �� ���� �˻�
        count++;
        i++;
        j--;
    }
    if (count == 5) {
        return 1;  // �¸�
    }

    return 0;  // �¸����� ����

}


int isVal(int pan[19][19], int r, int c) {
    if (pan[r][c] == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int pan[19][19] = { 0 };
    //���� ���� �׷��ش�

    pan[5][5] = 1;
    pan[7][7] = 2;
    printPan(pan);

    //�ݺ�{
    while (1) {
        //���� ��ǥ�� �Է¹޾� ����
        int r, c;
        while (1) {
            printf("���� ��ǥ�� �Է��ϼ���\n");
            scanf("%d %d", &r, &c);
            //���� ��ǥ�� �Է¹޾� ����
            if (isVal(pan, r, c)) {
                pan[r][c] = 2;
                break;
            }
            else {
                printf("�̹� ������ ��ǥ�Դϴ�.");
            }
        }
        //������ �׸���
        printPan(pan);
        //���� �¸����� �Ǵ�
        if (isWin(pan, r, c)) {
            printf("���� �¸��߽��ϴ�.");
            break;
        }
        //���� ��ǥ�� �Է¹޾� ����
        while (1) {
            printf("���� ��ǥ�� �Է��ϼ���\n");
            scanf("%d %d", &r, &c);
            //���� ��ǥ�� �Է¹޾� ����
            if (isVal(pan, r, c)) {
                pan[r][c] = 1;
                break;
            }
            else {
                printf("�̹� ������ ��ǥ�Դϴ�.");
            }
        }
        //������ �׸���
        printPan(pan);
        //���� �¸����� �Ǵ�
        if (isWin(pan, r, c)) {
            printf("���� �¸��߽��ϴ�.");
            break;
        }
    }
}