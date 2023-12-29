#include<stdio.h>
int main()
{
    long long i,t,n;

    scanf("%lld", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lld", &n);
        while(n%2020!=0){
            if(n%2021==0)
            {
                printf("YES\n");
                goto l;

            }

            n=n-2021;
            if(n<2020)
            {

                printf("NO\n");
                goto l;
            }

        }
        printf("YES\n");

l: continue;


       }




return 0;

}
