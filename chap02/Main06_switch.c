/*
 * Main06.c
 *
 *  Created on: 2016. 6. 23.
 *      Author: 315-08
 */

#include<stdio.h>
#include<stdlib.h>

int main06() {
	int rank;
	int jumsu;
	printf("������ �Է��ϼ��� [0 ~ 9] \n");
	fflush(stdout);
	scanf("%d", &rank);

	switch (rank) {
	case 1:
		jumsu = 100;
		break;
	case 2:
		jumsu = 90;
		break;
	case 3:
		jumsu = 80;
		break;
	case 4:
		jumsu = 70;
		break;
	case 5:
		jumsu = 60;
		break;
	default:
		jumsu = 50;
		break;
	}

	printf("����� ������ %d �Դϴ�.", jumsu);
	return 0;

}
