#include<stdio.h>
int main()
{
    int i,t,n;
    scanf("%d", &n);
     int a[100];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &t);
        a[t]=i;
    }
    for(i=1; i<=n; i++)
    {
        printf("%d ",a[i] );
    }
    return 0;
}
