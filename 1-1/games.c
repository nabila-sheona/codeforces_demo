#include<stdio.h>
#include<string.h>
int main()
{

    int i,t,j,ans=0,n;
      int a[1000],h[10000];
    scanf("%d", &n);

    for(i=0; i<n; ++i)
    {

            scanf("%d %d", &a[i],&h[i]);
        for(j=0; j<n; j++)
        {

             if (h[i] == a[j])
            {
                ans+= 1;
            }
            if (a[i] == h[j])
            {
                ans+= 1;
            }

        }
    }
    printf("%d", ans);
    return 0;
}
