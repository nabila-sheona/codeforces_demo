#include<stdio.h>
int main()
{
    int t,i,h,m,c,d,e;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        d=(24*60)+00;
        scanf("%d %d", &h, &m);
        c=(h*60)+m;
        e=d-c;
        printf("%d\n", e);
    }
    return 0;
}
