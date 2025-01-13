#include<stdio.h>
#define Max 20

void Tip(void);

typedef struct course
{
    double score;
    double credit;
    double point;
}course;

int main(void)
{
    course a[Max]={0};
    int num;
    double GPA;
    double sum_credit=0;
    double product=0;
    printf("Please input the number of subjects.\n");
    scanf("%d",&num);
    Tip();
    for(int i=0;i<num;i++)
    {
        scanf("%lf %lf",&a[i].score,&a[i].credit);
        if(a[i].score>100||a[i].score<0)
        {
            printf("Invalid arguments!");
            return -1;
        }
        if(a[i].score>=95&&a[i].score<=100) a[i].point=4.5;
        if(a[i].score>=90&&a[i].score<=94) a[i].point=4.0;
        if(a[i].score>=85&&a[i].score<=89) a[i].point=3.5;
        if(a[i].score>=80&&a[i].score<=84) a[i].point=3.0;
        if(a[i].score>=75&&a[i].score<=79) a[i].point=2.5;
        if(a[i].score>=70&&a[i].score<=74) a[i].point=2.0;
        if(a[i].score>=65&&a[i].score<=69) a[i].point=1.5;
        if(a[i].score>=60&&a[i].score<=64) a[i].point=1.0;
        if(a[i].score>=0&&a[i].score<=59) a[i].point=0;
    }
    for(int j=0;j<num;j++)
    {
        sum_credit+=a[j].credit;
        product+=(a[j].credit*a[j].point);
    }
    GPA=product/sum_credit;
    printf("Your GPA is %.2lf",GPA);
}

void Tip(void)
{
    printf("Tips:\n");
    printf("The input format is:\n");
    printf("Your score. \" \" The credit of the course.\n");
}