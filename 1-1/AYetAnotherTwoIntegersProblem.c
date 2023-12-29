#include<stdio.h>
int main()
{

    int i,t,a,b,c,e;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d", &a, &b);
        {

            if(a>b)
            {
                c=(a-b)+9;
                e=c/10;
                 printf("%d\n", e);


            }
            else
            {

                c=(b-a)+9;
                e=c/10;
                 printf("%d\n", e);
            }

        }

    }
    return 0;
}
