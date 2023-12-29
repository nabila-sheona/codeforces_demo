#include<stdio.h>
int main()
{

    long long int a,t,n;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &a);
        if(a<=1399)
        {
            printf("Division 4\n");

        }

        if(a>1399 && a<=1599)
        {
            printf("Division 3\n");

        }
        if(a>1599 && a<=1899)
        {
            printf("Division 2\n");

        }
        if(a>1899)
        {
            printf("Division 1\n");

        }

    }

    return 0;
}
