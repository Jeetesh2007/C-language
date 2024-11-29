#include <stdio.h>
#include<math.h>
int main()
{
 double a,b,c,d,r1,r2;
 int var;
 printf ("enter coffecients of your quad equation");
 scanf ("%lf%lf%lf",&a,&b,&c);
 d = (b*b - 4*a*c) ;
  if ( d >=0 )
   var = 1;
  else 
   var = 2;
switch(var)
 {case 1: 
    d >= 0;
    r1 = (-b+sqrt(d))/2*a;
    r2 = (-b-sqrt(d))/2*a;
    printf (" roots of equation are %lf%lf",r1,r2);
   case 2:
   d < 0;
   printf ( " no real roots");
    }
 
    

 }
    
    
   
   
   
