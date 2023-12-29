#include<stdio.h>
int main()
{
    int c, i, t;
    long long int a,b;
    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld %ld", &a, &b);
        if(a%b==0)
      {
        c;
        printf("%d\n", c);
       }
        else
         { c=b-(a%b);
        printf("%d\n", c);
         }
    c=0;
    }

     return 0;
}
