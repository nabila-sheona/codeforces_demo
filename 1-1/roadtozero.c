#include<stdio.h>
int main()
{

    int t,a,b,x,y;
    scanf("%d", &t);
    while(t--)
    {

        scanf("%d %d\n %d %d", &x, &y, &a, &b);


        if(x<y)
        {

            int temp=x;
            x=y;
            y=temp;
        }
        if(a+a<=b)
        {

            printf("%lld\n", (x+y)*a);
            continue;
        }
        if(a+a>b)
        {
            long long int r=x*b;
            long long int z=(x-y)*a;
            printf("%lld\n", r+z);
            continue;

        }
    }
    return 0;
}
