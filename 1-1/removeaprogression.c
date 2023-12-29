#include<stdio.h>
int main()
{

    int a,i,x,b,t;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d", &a, &b);

        x=b*2;
        printf("%d\n", x);
    }
    return 0;
}
