#include<stdio.h>
int main()
{

    int a,n,max=0;
    scanf("%d", &n);

    if(n>=0)
    {

        max=n;
    }
    else
    {

        a=n/10;
     int b=n/100;
     b*=10;
     b+=n%10;
        if(a>b)
        {
            max=a;
        }
        else
        {
            max=b;
        }

    }
    printf("%d", max);
    return 0;

}
