#include<stdio.h>
int n;
float s;
float a,b;
float cal( float a , float b);
int main()
{ 
  printf( " 1:Addition , 2 : subrtaction , 3 : multiplication , 4 : division \n");
  printf(" select your operation");
  scanf("%d",&n);
  printf("Enter your numbers");
  scanf("%f%f",&a,&b);
  cal(a,b);
  }
float cal( float a, float b)
{
  switch(n) 
   {
     case 1 :
        s = a+b;
        printf(" answer is %f",s);
        break;
     case 2 :
        s = a-b;
         printf(" answer is %f",s);
        break;
     case 3 :
        s = a*b;
         printf(" answer is %f",s);
        break;
     case 4 :
       s = a/b;
        printf(" answer is %f",s);
       break;
       default : printf("invalid selection");
       }
     return s;
     }
        
  
