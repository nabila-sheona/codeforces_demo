#include<stdio.h>
int main()
{

    int m,n,d,i,t;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d", &m, &n);
        d=(m*n+1)/2;
        printf("%d\n", d);
    }
    return 0;
}
