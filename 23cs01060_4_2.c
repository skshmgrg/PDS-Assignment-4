#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    switch(a>b)
    {
        case 1:
        switch(a>c)
        {
            case 1:printf("The first number is the greatest number.");break;
            case 0:break;
        }
        case 0:switch(b>c)
        {
            case 1:printf("the second number is the greatest number");break;
            case 0:printf("the third number is the gratest number");break;
        }
    }
}