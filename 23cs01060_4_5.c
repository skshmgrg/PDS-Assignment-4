#include<stdio.h>
int main()
{   int n,a1,a2,a3,original;
    printf("enter the number to be checked : ");
    scanf("%d",&n);
    original=n;
    a1=n/100;
    n=n%100;
    a2=n/10;
    n=n%10;
    a3=n;
    if (original>=100 && original<=999)
    {
    if (a1*a1*a1 + a2*a2*a2 + a3*a3*a3 == original)
    {
        printf("yes");
    }
    else 
    {
        printf("no");
    }
    }
    else 
    {
        printf("incorrect input");
    }

}