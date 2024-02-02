#include<stdio.h>
int main()
{
    int age,price;
    printf("Enter Age: ");
    scanf("%d",&age);
    if (age<5)
    price=0;
    if (age>=5 && age<=12)
    price=20;
    if (age>12 && age<=59)
    price=50;
    if (age>=60)
    price=50-0.2*50;
    printf("the ticket price is %d",price);

}