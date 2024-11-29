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
 {
  while ( i <= num)
 {
  r =r*i ;
  i++;
  }
printf ( " fac is %d ",r);
}

}
 
 
 
