#include<stdio.h>
int main()
{   float b,s,i;
    printf("enter the current balance\n");
    scanf("%f",&b);
    printf("enter the credit score\n");
    scanf("%f",&s);
    if(s<600)
    i=0.15*b;
    if(600<=s&&s<=750)
    i=0.12*b;
    if(s>750)
    i=0.1*b;
    printf("the interest amount is %f",i);
}