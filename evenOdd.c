#include<stdio.h>
int a;
void evenOdd(int a);
int main(int a)
{
  printf("enter your number");
  scanf("%d",&a);
  evenOdd(a);
  }
void evenOdd(int a)
{
   if ( a%2 == 0)
   {
     printf("given number is even");
     }
   else
   {
     printf("given number is odd");
     }
     }
