#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int i=0, n;
        scanf("%d", &n);

        if(n==1)
        {
            printf("-1\n");
            continue;
        }

        else
        {

            for(i=1; i<n; i++)
            {
                printf("9");
            }

            printf("4\n");

        }

    }

    return 0;

}
