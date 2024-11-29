#include<stdio.h>
int a,b;
void sum();
void sub();
void mul();
int main()
{
  printf("enter your numbers");
  scanf("%d%d",&a,&b);
   sum();
 }
 void sum()
 {  int s;
    s = a+b;
    printf("sum is %d\n",s);
    mul();
    }
 void mul()
 {
   int mul;
   mul = a*b;
   printf("product is %d\n",mul);
   sub();
   }
 void sub()
 {
   int sub;
   sub = a-b;
   printf("difference is %d\n",sub);
   }
    
 
   

