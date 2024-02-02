#include<stdio.h>
int main()
{ int n;
  printf("enter the number\n");
  scanf("%d",&n);
  switch(n%2)
  {
    case 0:printf("the number you entered is even");
    break;
    case 1:printf("the number you entered is odd");
    break;
  }
}