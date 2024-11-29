#include<stdio.h>
int main()
{
 int r=1,i = 1,num;
 printf("enter your number");
 scanf("%d",&num);
 printf("%d",num);
if (  num < 0)
    printf ( " fac doesnot exist");
 else
{ do
 { r=r*i;
   i++;
   }
  while ( i <= num);
 printf ( " fac is %d ",r);
 }

}


 
 
