#include<stdio.h>
int main()
{

    int a,b,c=0,d=0,e=0,f=0;
    scanf("%d %d", &a, &b);
    for(int i=0; i<a; i++)
    {
        scanf("%d", &c);
        if(c>b)
        {
            e=e+2;
        }
        if(c<=b)
        {
            d=d+1;
        }

    }

    printf("%d", e+d);
    return 0;
}
