/*
 ============================================================================
 Name        : �ζ�.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int header();
void inputf(int *sp, int len);
int uniqueValue(int *sp, int index);
void outputf(int *sp, int len);

int main05(void)
{
    int su[7];
    int len=sizeof(su)/sizeof(su[0]);

    int n, i, seed;
    while(1)   //1==true
    {
        int num=header();
        switch(num)
        {
        case 1:
            srand(time(NULL));  //Seed �� �Է�
            inputf(su, len);
            outputf(su, len);
            break;
        case 2:
            printf("�ζǹ�ȣ ��Ʈ ���� �Է� �ϼ���.\n");
            fflush(stdout);
            scanf("%d",&n);
            srand(time(NULL));//Seed �� �Է�
            for(i=1; i<=n; i++)
            {
                inputf(su, len);
                outputf(su, len);
            }
            break;
        case 3:
            printf("�ζ� ��ȣ�� ������ ����� ���� �Է� �ϼ���.\n");
            fflush(stdout);
            scanf("%d",&seed);
            srand(seed);  //Seed �� �Է�
            inputf(su, len);
            outputf(su, len);
            break;
        default:
            return 0;//exit(0);
        }
    }


    return EXIT_SUCCESS;
}
int header()
{
    printf("\n\n<<�ζ� ���α׷�>>\n");
    printf("1. �ڵ� ���� (1 Set)\n");
    printf("2. �ڵ� ���� (N Set)\n");
    printf("3. Seed �Է� \n");
    printf("4. ���� \n");
    printf("��ȣ�� �����ϼ���.");
    fflush(stdout);
    int num;
    scanf("%d",&num);
    return num;
}
void inputf(int *sp, int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        *(sp+i)=uniqueValue(sp,i);  //�ߺ����� �������� ���� ���� �Լ�
    }
}
void outputf(int *sp, int len)
{
 	// �迭���� ����ϼ���
   
}
int uniqueValue(int *sp, int index)
{
    int temp;
    int dup,k;
    do
    {
        //�� ���ϱ�
        
        //�ߺ�üũ
        
        
    }
    while(dup==1);
    return temp;
}
