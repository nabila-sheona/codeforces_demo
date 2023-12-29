#include<stdio.h>
int main()
{
    long long t,n,a,b;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
       a=1-n;
       b=n;

        printf("%lld %lld\n", a,b);
    }
    return 0;
}
