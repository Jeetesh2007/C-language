#include<stdio.h>
int main()
{
  float F;
  float C;
  printf("enter your temperature");
  scanf("%f",&F);
  C = (F-32)*5/9;
  printf("temperature in C is %f",C);
  }
