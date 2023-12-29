#include<stdio.h>
int main()
{
  int a,b,c,d,e,f, b1, c1, d1, e1, f1, sum;
  scanf("%d", &a);
  b=a/5;
  b1=a%5;
  c=b1/4;
  c1=b1%4;
  d=c1/3;
  d1=c1%3;
  e=d1/2;
  e1=d1%2;
  f=e1/1;
  f1=f1%1;
  sum=b+c+d+e+f;
  printf("%d", sum);
  return 0;
  }
