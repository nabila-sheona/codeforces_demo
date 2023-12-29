#include<stdio.h>
int main()
{
    long long i,c,t,n,a=0,j;

    scanf("%lld", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lld", &n);
        if(n<2020)
            {

                printf("NO\n");

            }
      else{
            while(n%2020!=0 )
        {

            if(n%2020==1 n%2021==0)
            {
                printf("YES\n");
                break;
            }
            n=n-2021;

            if(n<2021)
            {
                printf("NO\n");
                break;

            }

        }

       }}




return 0;

}


