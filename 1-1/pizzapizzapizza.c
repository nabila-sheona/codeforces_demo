#include<stdio.h>
int main()
{

    long long int a, b;

    scanf("%lld", &a);

    if(a%2!=0)
    {
        b=(a+1)/2;
    }

    else
    {
        b=a+1;
    }

      if(a==0){

        b=0;

    }

    printf("%lld", b);
    return 0;

}
