#include<stdio.h>
int main()
{
    long long i,t,a,b,c;
    scanf("%lld", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);

        if(a==b && b==c)
        {
            printf("1 1 1\n");
        }


     else if(a==b && a>c)
        {
            printf(" 1 1 %lld\n", (a-c+1));
        }
        else if(a==c && a>b)
        {
            printf(" 1 %lld 1\n", (a-b+1));
        }
        else if(b==c && b>a)
        {
            printf("%lld 1 1\n", (b-a+1));

        }

   else if(a>b && a>c)
        {
            printf(" 0 %lld %lld\n", (a-b+1), (a-c+1));
        }
        else if(b>a && b>c)
        {
            printf("%lld 0 %lld\n", (b-a+1), (b-c+1));
        }
        else if(c>a && c>b)
        {
            printf("%lld %lld 0\n", (c-a+1), (c-b+1));
        }




    }





    return 0;
}
