#include<stdio.h>
int main()

{

    int t;
    scanf("%d", &t);

    while(t--)
    {
       long long int a,b,c,p,x,y,z;
        scanf("%lld %lld %lld %lld", &p, &a, &b, &c);

        x=a-(p%a);
        y=b-(p%b);
        z=c-(p%c);

        if(p%a==0 || p%b==0 || p%c==0)
        {
            printf("0\n");
            continue;
        }
        long long int min;



        if(x<y && x<z)
        {
            min=x;
        }
        else if(y<x && y<z)
        {
            min=y;
        }
        else
        {
            min=z;
        }

        printf("%lld\n", min);
    }
    return 0;

}
