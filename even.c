#include<stdio.h>
int main()
{ 
  int i,n;
  printf("enter limit of even numbers");
  scanf("%d",&n);
  for(i = 2;i <= n;i = i+2)
  {
    printf("%d\t",i);
      }
 }
