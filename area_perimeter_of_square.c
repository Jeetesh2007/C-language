#include<stdio.h>
int s;
void area();
void peri();
int main()
{
  printf("enter side of your square");
  scanf("%d",&s);
   area();
   peri();
 }
 void  area()
 { int area;
   area = s*s;
   printf(" area is : %d\n ",area);
   }
 void peri()
 {
   int per;
   per = 4*s;
   printf("perimeter is : %d\n",per);
  }
