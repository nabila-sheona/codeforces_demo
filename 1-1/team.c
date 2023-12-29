#include<stdio.h>
int main()
{
    int h,g,n,m;
    scanf("%d", &n);
    m=n*(n-1);
    h=m-(n-1);
    g=n-h;
    printf("%d", g);
    return 0;
}
