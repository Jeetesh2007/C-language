#include<stdio.h>
int main()
{
 int r=0,i = 0,num;
 printf("enter your number");
 scanf("%d",&num);
if (  num < 0)
    printf ( " fib doesnot exist");
 else
 {
  while ( i <= num)
 {
  r =r+i ;
  r = r+r ;
  }
printf ( " fib is %d/n",r);
}

}
 
