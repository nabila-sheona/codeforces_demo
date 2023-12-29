#include<stdio.h>
int main()
{

    int a,i,t,d;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &a);
        d=(180-a);
        if(360%d==0)
        {
            printf("YES\n");

        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
