#include<stdio.h>
int n ;
int sum (int n);
int main()
{ 
  int R = 0;
  printf("Enter value of n ");
  scanf("%d",&n);
  R = R+ sum( n );
  printf("%d",R);
  }
int sum( int n )
{
  if( n == 1 )
   return 1;
  else 
   return  n + sum( n-1);
   }
  
  

