#include<stdio.h>
int main()
{
   int a,b,m,n;
   scanf("%d %d", &a, &b);
   if(a>b)
   {m=b;
   n=(a-b)/2;}
   else{
   m=a;
   n=(b-a)/2;
   }
   printf("%d %d", m, n);
   return 0;
}
