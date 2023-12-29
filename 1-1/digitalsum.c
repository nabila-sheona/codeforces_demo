#include<stdio.h>
int main()
{
    int t,n,h;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        h=(n+1)/10;
        printf("%d\n", h);
    }
    return 0;
}
