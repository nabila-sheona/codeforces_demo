#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
        if(a[0]==1)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}



