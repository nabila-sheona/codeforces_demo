#include<stdio.h>
int main()
{
    int i=1;
    int u=0;
    int p,v,t,d,s;
    scanf("%d", &s);
    while(i<=s)
    {
    scanf("%d%d%d", &p, &v, &t);
    if(p+v+t>=2)
    {d=1;
    }
    else{
     d=0;}

     u=u+d;
     ++i;
    }

    printf("%d", u);

    return 0;
}
