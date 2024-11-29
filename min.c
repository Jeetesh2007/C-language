#include<stdio.h>
int set[100],n,t,i,setp[100],setn[100],l = 1,m = 1,R,j,k;
int min( int n );
int main()
{
  printf("enter how many elements you want to enter");
  scanf("%d",&t);
  printf("enter your elements");
  for( i = 0 ; i < t; i++)
   {
     scanf("%d",&set[i]);
   }
  R = min(n);
  printf("%d",R);
}
int min( int n )
{
   while ( i <= t-1)
     {
        if( set[i] < 0 )
         {
            setn[i] = set[i];
                 l = l+1;
         }
        else 
         {
            setp[i] = set[i];
              m = m+1;
         } 
        i++;
      }
    if ( l != 1)
    {
      for( i = 0 ; i < l; i++ )
      {  
           j = setn[0];
         if( j > setn[i] )
           {
               j = setn[i];
               }
          }
           n = j;
          return n;
       }
     else 
      {
         for( i = 0 ; i < m; i++ )
      {  
           k = setp[0];
         if( k > setp[i] )
           {
               k = setp[i];
               }
             
       }
            n = k;  
           return n;
        }
}  
      
