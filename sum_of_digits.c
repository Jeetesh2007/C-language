#include<stdio.h>
int R,N,k;
int sum(int N);
int main()
{
  printf("Enter your number ");
  scanf("%d",&N);
  R = R+sum(N);
  printf("%d",R);
   }
int sum( int N )
{ 
   
  if ( N < 10 )
   return N;
  else
      return  N%10 + sum(N/10);
        
    }
