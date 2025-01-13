#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define Num 9

int main(void)
{
    int a;
    int initial_number=0;
    scanf("%d",&initial_number);
    srand((unsigned)time(NULL));
    double options[Num]={-3,-2,-1,0.5,1.5,2,2.5,3,3.5};
    for(int i=0;i<25;i++)
    {
        Sleep(i*i);
        a=rand()%Num;
        printf("%.1lf\n",options[a]);
    }
    printf("The option is %.2f\n",options[a]);
    printf("The final number is %.2lf",options[a]+initial_number);
}