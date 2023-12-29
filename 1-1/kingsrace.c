#include<stdio.h>
int main()
{
    long long int n,m,p,w,b,l,s;

    scanf("%lld", &n);
    scanf("%lld %lld", &m, &p);

    if(m>p)
    {
        l = m;
        s = p;
    }
    else
    {
        l=m;
        s=p;
    }
    w = l-1;
    b = n-s;

    if(w<=b)
    {
        printf("White\n");
    }
    else
    {
        printf("Black\n");
    }
    return 0;
}
