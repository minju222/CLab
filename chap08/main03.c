#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "point.h"
#include "point2.h"
void print(Point p) {
	printf("%d %d %d\n", p.r, p.c, p.cnt);

}

int main03() {
	Point p;
	p.r = 10;
	p.c = 20;
	p.cnt = 30;

	printf("%d %d %d\n", p.r, p.c, p.cnt);
	print(p);
}
