#include<stdio.h>

int main()
{
    int a, b, k, l, sum;
    scanf("%d %d",&a,&b);
    for(int i=1; a>=0 && b>=0; i++)
    {

        if(i%2!=0)
        {
            a=a-i;
        }
        else
        {
            b=b-i;
        }

    }

    if(a<b)
    {
        printf("Vladik");
    }

    if(a>b)
    {
        printf("Valera");
    }
    return 0;
}
