#include<stdio.h>
int main()
{ 
  int binary[100] ;
  int num;
  int r,m = 0;
  printf("enter positive number");
  scanf("%d",&num);
  if( num > 0)
  {
  while( num > 0 )
   {  
      
       
          r = num%2;
          binary[m] = r;
          m = m+1;
          num = num/2;  
    }
    for( ; m>=0 ; m--)
    {
       printf("%d",binary[m]);
       }
       }
   else if( num == 0  )
   {
      printf("%d",0);
      }
   else
   {
      num = num*(-1);
      while( num > 0 )
   {  
      
       
          r = num%2;
          binary[m] = r;
          m = m+1;
          num = num/2;  
    }
     printf("-%d",binary[m]);
      m = m-1;
    for( ; m>=0 ; m--)
    {
       printf("%d",binary[m]);
       }
       }
     
       
       
      
      
   
}
           
