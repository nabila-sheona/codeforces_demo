#include<stdio.h>
int main()
{

    long long int n,x,j,s1=0,s2=0,i,t;

    scanf("%lld", &t);
    while(t--)
    {

        scanf("%lld", &n);
        if(n%4!=0)
        {

            printf("NO\n");

        }
        else
        {
            printf("YES\n");

            for(i=2; i<=n; i+=2)
            {


                printf("%lld ", i);
                s1=s1+i;

            }
            for(i=1; i<=n-2; i+=2)
            {


                printf("%lld ", i);
                s2=s2+i;


            }

            x=s1-s2;
            printf("%lld\n", x);


        }
        s1=0;
        s2=0;
    }
    return 0;
}
