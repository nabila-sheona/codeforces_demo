#include<stdio.h>
int main()
{

    int a,i,t,d;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &a);
        d=d+a;

    }
    if(d>0)
    {

        printf("HARD\n");
    }

    else
    {
        printf("EASY\n");
    }
    return 0;
}
