#include<stdio.h>

int main(){

long long int n,i,k,c,d;
scanf("%lld %lld", &n, &k);

if(n%2 == 0)
    {
        c = n / 2;
    }
    else
    {
        c = (n / 2)+1;
    }
    if(k <= c)
    {
        printf("%lld", (k * 2) - 1);
    }
    else
    {
        printf("%lld", (k - c) * 2);
    }


return 0;

}

