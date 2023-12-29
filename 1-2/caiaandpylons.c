#include<stdio.h>
int main()
{

    long long int x=0,y,s=0,n,a[100000]={},e=0;
    scanf("%lld", &n);
    for(long long int i=1; i<=n; i++)
    {

    scanf("%lld", &a[i]);

    }


    for(long long int i=1; i<=n; i++)
    {
        e+=a[i-1]-a[i];
        if(e<0)
        {

            s+=e*-1;
            e=0;

        }

    }

    printf("%lld\n", s);
    return 0;

}
