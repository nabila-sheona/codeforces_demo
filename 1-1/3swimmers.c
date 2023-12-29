#include<stdio.h>
int main()

{

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int a,b,c,p;
        scanf("%d %d %d %d", &p, &a, &b, &c);

        int x=a-(p%a);
        int y=b-(p%b);
        int z=c-(p%c);

        if(p%a==0 || p%b==0 || p%c==0)
        {
            printf("0\n");
            continue;
        }
        int min;



        if(x<y && x<z)
        {
            min=x;
        }
        else if(y<x && y<z)
        {
            min=y;
        }
        else
        {
            min=z;
        }

        printf("%d\n", min);
    }
    return 0;

}
