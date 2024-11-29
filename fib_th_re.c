#include<stdio.h>
int n,i;
int fib(int i);
int main()
{ int R;
  printf("Enter no.of digits you want to print");
  scanf("%d",&n);
  for( i =0 ; i <n ; i++)
   {  
      R = fib(i);
     printf("%d",R);
   }
}
      
  
int fib( int n )
{ 
  if ( n == 0 )
   return 0;
  else if ( n == 1)
   return 1;
  else 
   { 
      return  fib(n-1)+fib(n-2) ;
      
        
          }
}
  
