#include<stdio.h>
int main()
{

    int n,a,b,c,t;
    scanf("%d", &t);
    while(t--)
    {
        int max=0,min=0;
        scanf("%d %d %d", &a, &b, &c);

        if(a>b && a>c)
        {
            max=a;

        }
        else if(b>c && b>a)
        {
            max=b;

        }

        else
        {
            max=c;

        }



        if(a<b && a<c)
        {
            min=a;

        }
        else if(b<c && b<a)
        {
            min=b;

        }

        else
        {
            min=c;

        }



        if(a!=max && a!=min)
        {
            printf("%d\n", a);
            continue;

        }


        else if(b!=max && b!=min)
        {
            printf("%d\n", b);
            continue;

        }


        else if(c!=max && c!=min)
        {
            printf("%d\n", c);
            continue;

        }

    }
    return 0;
}
