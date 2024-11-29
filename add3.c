#include<stdio.h>
int a,b;
int add();
int main(int a,int b)
{
  printf("Enter two numbers");
  scanf("%d%d",&a,&b);
  add(a,b);
  
  }
int add(int a,int b)
{ 
   int s;
     s = a+b;
     printf("%d",s);
     return s;
     }
  
