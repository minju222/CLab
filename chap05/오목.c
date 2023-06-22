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
				printf("●");
			}
			else if (pan[i][j] == 2) {
				printf("○");
			}
			else {
				printf("☆");
			}
		}
		printf("|\n");
	}
	printf("-------------------------------------------\n");
}

int isWin(int pan[19][19], int r, int c) {
    int player = pan[r][c];  // 현재 플레이어 (1: 흑, 2: 백)
    int count;  // 돌의 연속 개수

    // 가로 방향 검사
    count = 1;  // 현재 놓은 돌부터 세기 시작하므로 count는 1로 초기화
    int i = c - 1;
    while (i >= 0 && pan[r][i] == player) {  // 왼쪽 방향 검사
        count++;
        i--;
    }
    i = c + 1;
    while (i < 19 && pan[r][i] == player) {  // 오른쪽 방향 검사
        count++;
        i++;
    }
    if (count == 5) {
        return 1;  // 승리
    }

    // 세로 방향 검사
    count = 1;
    int j = r - 1;
    while (j >= 0 && pan[j][c] == player) {  // 위쪽 방향 검사
        count++;
        j--;
    }
    j = r + 1;
    while (j < 19 && pan[j][c] == player) {  // 아래쪽 방향 검사
        count++;
        j++;
    }
    if (count == 5) {
        return 1;  // 승리
    }

    // 대각선 방향 (\) 검사
    count = 1;
    i = c - 1;
    j = r - 1;
    while (i >= 0 && j >= 0 && pan[j][i] == player) {  // 왼쪽 위 방향 검사
        count++;
        i--;
        j--;
    }
    i = c + 1;
    j = r + 1;
    while (i < 19 && j < 19 && pan[j][i] == player) {  // 오른쪽 아래 방향 검사
        count++;
        i++;
        j++;
    }
    if (count == 5) {
        return 1;  // 승리
    }

    // 대각선 방향 (/) 검사
    count = 1;
    i = c - 1;
    j = r + 1;
    while (i >= 0 && j < 19 && pan[j][i] == player) {  // 왼쪽 아래 방향 검사
        count++;
        i--;
        j++;
    }
    i = c + 1;
    j = r - 1;
    while (i < 19 && j >= 0 && pan[j][i] == player) {  // 오른쪽 위 방향 검사
        count++;
        i++;
        j--;
    }
    if (count == 5) {
        return 1;  // 승리
    }

    return 0;  // 승리하지 않음

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
    //오목 판을 그려준다

    pan[5][5] = 1;
    pan[7][7] = 2;
    printPan(pan);

    //반복{
    while (1) {
        //흑의 좌표를 입력받아 저장
        int r, c;
        while (1) {
            printf("흑의 좌표를 입력하세요\n");
            scanf("%d %d", &r, &c);
            //흑의 좌표를 입력받아 저장
            if (isVal(pan, r, c)) {
                pan[r][c] = 2;
                break;
            }
            else {
                printf("이미 놓여진 좌표입니다.");
            }
        }
        //오목판 그리기
        printPan(pan);
        //흑의 승리여부 판단
        if (isWin(pan, r, c)) {
            printf("흑이 승리했습니다.");
            break;
        }
        //백의 좌표를 입력받아 저장
        while (1) {
            printf("백의 좌표를 입력하세요\n");
            scanf("%d %d", &r, &c);
            //백의 좌표를 입력받아 저장
            if (isVal(pan, r, c)) {
                pan[r][c] = 1;
                break;
            }
            else {
                printf("이미 놓여진 좌표입니다.");
            }
        }
        //오목판 그리기
        printPan(pan);
        //백의 승리여부 판단
        if (isWin(pan, r, c)) {
            printf("백이 승리했습니다.");
            break;
        }
    }
}