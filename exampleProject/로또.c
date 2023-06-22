/*
 ============================================================================
 Name        : 로또.c
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

int main_lotto(void)
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
            srand(time(NULL));  //Seed 값 입력
            inputf(su, len);
            outputf(su, len);
            break;
        case 2:
            printf("로또번호 셋트 수를 입력 하세요.\n");
            fflush(stdout);
            scanf("%d",&n);
            srand(time(NULL));//Seed 값 입력
            for(i=1; i<=n; i++)
            {
                inputf(su, len);
                outputf(su, len);
            }
            break;
        case 3:
            printf("로또 번호를 생성할 행운의 수를 입력 하세요.\n");
            fflush(stdout);
            scanf("%d",&seed);
            srand(seed);  //Seed 값 입력
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
    printf("\n\n<<로또 프로그램>>\n");
    printf("1. 자동 생성 (1 Set)\n");
    printf("2. 자동 생성 (N Set)\n");
    printf("3. Seed 입력 \n");
    printf("4. 종료 \n");
    printf("번호를 선택하세요.");
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
        *(sp+i)=uniqueValue(sp,i);  //중복되지 않은값을 구해 오는 함수
    }
}

void outputf(int *sp, int len)
{
    for (int i = 0; i < len; i++) {
        printf("%d ", *(sp+i));
    }
    printf("\n");

   
}

int uniqueValue(int *sp, int index)
{
    int temp;
    int dup;
    do
    {
        //값 구하기
        temp = rand() % 45 + 1;
        printf("%d ", temp);
        dup = 0;
        //중복체크
        for (int i = 0; i <= index; i++) {
            if (*(sp + i) == temp) {
                dup = 1;
                break;
            }
        }
        
    }
    while(dup==1);
    return temp;
}
