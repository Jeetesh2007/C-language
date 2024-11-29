#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter your numbers");
 scanf("%d%d%d",&a,&b,&c);
if (a > b)
 { if ( a > c)
    printf( "%d is greatest number",a);
 }
else if ( b > c)
  { if ( b > a)
    printf( "%d is greatest number",b);
  }
else
   printf( " %d is greatest number",c);
}  
