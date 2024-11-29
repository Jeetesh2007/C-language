#include<stdio.h>
int n;
void fac();
int main()
{
  printf("Enter your number");
  scanf("%d",&n);
  if ( n > 0 && n < 2)
  {
    printf("factorial of %d is 1",n);
    }
  else if ( n >=2)
   {
     fac();
     }
   else
   {
     printf("factorial do not exist");}
}
void fac()
{ int i = 1,t =1;
  while (i <= n)
  {
     t = i*t;
      i++;
      }
   printf("factorial of %d is %d",n,t);
   }
    
  

