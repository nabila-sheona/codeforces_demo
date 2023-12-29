#include<stdio.h>
int main()
{
    int i=1, t, w;
    long long int  n;
    scanf("%d", &t);
    while(i<=t)
    {
     scanf("%ld", &n);
       w=(n-1)/2;
       printf("%d\n", w);
       i++;
    }
  return 0;
}


