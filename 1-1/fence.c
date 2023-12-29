#include<stdio.h>
int main()
{
    long long int i,t, a,b,c,d,max;
    scanf("%lld", &t);
    for(i=0;i<t;i++){
      scanf("%lld %lld %lld", &a, &b,&c);

      d=a+b+c-1;
      printf("%lld\n", d);
      }
    return 0;

}
