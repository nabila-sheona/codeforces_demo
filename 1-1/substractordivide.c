#include<stdio.h>
int main()
{
    int i,t,n,d;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        if(n<=3)
        {
            printf("%d\n", n-1);
        }


        if(n>3)
        {
            if(n%2==0)
            {
                printf("2\n");
            }
            else
            {
                printf("3\n");
            }

        }
    }
    return 0;
}


