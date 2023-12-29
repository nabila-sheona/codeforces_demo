#include<stdio.h>
int main()
{
    int n,k,c=0;
    scanf("%d %d", &n, &k);
    int a[n],i,d;

    for(i=0; i<n; i++)
    {
         scanf("%d", &a[i]);
         d=5-a[i];
        if(d>=k)
        {
            c++;
        }

    }
    int ans=c/3;
    printf("%d", ans);
    return 0;
}
