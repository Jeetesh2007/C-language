#include<stdio.h>
 int main()
 { int a;
   printf("enter your marks");
   scanf("%d",&a);
   if ( a >= 80)
    printf("your grade is A");
   else if ( a <= 80 && a > 60)
    printf("your grade is B");
   else if ( a <= 60 && a >40)
    printf("your grade is C");
   else
    printf("your are failed");
  }   
