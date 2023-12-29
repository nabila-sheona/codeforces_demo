#include<stdio.h>

int main()
{

    int i,n,a[10000],b[100000],best=0,calc=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        calc=calc+b[i]-a[i];
        if(calc>best)
        {

            best=calc;
        }
        else
        {
            continue;
        }

    }

    printf("%d", best);
    return 0;

}
