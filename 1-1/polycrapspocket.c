#include<stdio.h>
int main()
{
    int n, i, m;
    scanf("%d", &n);
    int a[1000]={0};

    int ans=0;
    for(i=0;i<n;i++)
    {
        scanf("%d", &m);
        a[m]++;

        if(a[m]>ans)
        {
            ans=a[m];
        }
    }
    printf("%d\n", ans);
    return 0;
}
