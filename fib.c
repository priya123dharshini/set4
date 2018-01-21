#include<stdio.h>
#include<conio.h>
void main()
{
  int a=0,b=1,c,n,i=2;
  printf("enter a number");
  scanf("%d",&n);
  while(i>n)
  {
  c=a+b;
  i++;
  }
  printf("the fibonaaci series is %d",c);
  a=b;
  b=c;
  }
  
  
