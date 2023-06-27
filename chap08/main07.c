#include<stdio.h>
#define NAME_CAT(x,y) (x ## y)
#define PRINT_EX(x) printf(#x " = %d\n",x)
#define PRINT_STRING(x) printf(#x)
//#pragma comment (linker,"/subsystem:window")

//#pragma warning(_CRT_SECURE_NO_WARNINGS)
//#define _CRT_SECURE_NO_WARNINGS

// # and ##

int main07() {

    int a1, a2;

    NAME_CAT(a, 1) = 10;
    NAME_CAT(a, 2) = 5;

    PRINT_EX(a1 + a2);
    PRINT_EX(a1 - a2);

    PRINT_STRING(THIS IS STRING\n);
    return 0;
}
