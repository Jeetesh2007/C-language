#include<stdio.h>
int a,b;
int add();
int main()
{
  printf("Enter two numbers");
  scanf("%d%d",&a,&b);
  add();
  
  }
int add()
{ 
   int s;
     s = a+b;
     printf("%d",s);
     return s;
     }
  
