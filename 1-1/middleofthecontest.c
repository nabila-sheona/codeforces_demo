#include<stdio.h>
int main()
{
    int x1,x2,h1,h2,m1,m2,h3,m3;

    scanf("%d:%d",  &h1, &m1);
    scanf("%d:%d", &h2, &m2);
    x1=(h1*60)+m1;
    x2=(h2*60)+m2;
    int x=x2-x1;
    int y=x/2;
    if(y>=60)
    {
        h3=h1+(y/60);
        m3=m1+(y%60);
    }
    else
    {

        h3=h1;
        m3=m1+y;
    }
    if(m3>=60)
    {
        h3=h3+1;
        m3=m3-60;
    }
    printf("%.2d:%.2d", h3, m3);

    return 0;
}
