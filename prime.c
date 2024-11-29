#include<stdio.h>
int n,i = 2;
void prime();
int main()
{
  printf( "enter your number");
  scanf("%d",&n);
  prime();
  }
void prime()
{ int s = 1;
  if ( n == 1)
  {
    printf("1 is neither prime nor composite");
    }
  else if ( n == 2)
   {
     printf( " 2 is not a prime number");
     }
  else 
   { while( i < n)
      {
        s = n%i * s;
         i++;
         }
      if ( s != 0 )
       {
         printf(" %d is prime number ",n);
         }
         
       else 
       {
         printf(" %d is not a prime number",n);
         }
         }
 }
      
     
