
#include<stdio.h>
#define MAX 100
#define PI 3.141592

int main02(){
	const char a1 = 'A';
	//a1 = 'B';
	printf("%c \n",a1);
	printf("%d \n",a1);
	printf("%d \n",'A');
	printf("%d \n",'a');

	printf("%d\n",MAX);

	printf("%lf\n",PI);

	printf("%lf\n", 3.4f);

	printf("%lf\n", 3.4);

    printf("%x\n", 0xf);

	return 0;

}
