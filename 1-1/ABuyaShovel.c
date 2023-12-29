#include<stdio.h>
int main()
{
    int k,r,x,i;
    scanf("%d %d", &k, &r);
    for(x=1; x<1000; x++)
    {
        if(k*x%10==0  || k*x%10==r)
        {
            printf("%d\n", x);
            break;

        }
    }
    return 0;
}
