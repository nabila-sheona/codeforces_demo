#include<stdio.h>
int main()
{
    int k,n,w,x, m,r;
    scanf("%d %d %d", &k, &n, &w);
    m=(w*(w+1))/2;

    r=m*k;
    x=r-n;
    if(n>=r)
    {
        printf("0");
    }
    else{
    printf("%d", x);
    }
    return 0;
}
