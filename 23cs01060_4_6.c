#include<stdio.h>
int main()
{   int a,b;
    char c1;
    printf("enter the two numbers\n");
    scanf("%d %d",&a,&b);
    printf("enter the operation to be performed: ");
    getchar();
    scanf("%c",&c1);
    switch(c1)
    {
        case '+' :printf("%d",a+b);
        break;
        case '-' :printf("%d",a-b);
        break;
        case '*' :printf("%d",a*b);
        break;
        case '/' :printf("%f",(float)a/b);
        break;
    }


}