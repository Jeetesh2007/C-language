#include <stdio.h>
#include <math.h>
int main()
{
 float a,b,c,d,r1,r2;
 int var;
 printf ("enter coffecients of your quad equation");
 scanf ("%f%f%f",&a,&b,&c);
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
    printf (" roots of equation are %f%f/n",r1,r2);
    break;
   case 2:
   d < 0;
   printf ( " no real roots");
    }
 
    

 }
    
    
   
   
   
