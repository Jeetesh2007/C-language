#include<stdio.h>
int n,a,R,i;
int ma[100];
int max(int n);
int main( )
{
  printf("how many array elements do you want to enter");
  scanf("%d",&a);
  printf("Enter array elements ");
  for( i = 0 ; i < a ; i++)
  {
    scanf("%d",&ma[i]);
    }
    R = max(n);
    printf("%d",R);
}
int max(int n)
{
  int ma1 = 0;
  for( i = 0; i < a ; i++)
  { if( ma1 < ma[i] )
    {
      ma1 = ma[i];
      }
      }
   n = ma1;
   return n;
   }

