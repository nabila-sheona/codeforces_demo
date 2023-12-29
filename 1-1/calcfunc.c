#include<stdio.h>
int main ()
{
    long long n,i,d;
    scanf("%lld", &n);
    for(i=1;i<=n;i++)
    {
       if(n%2==0){
        d=n/2;
        }
        else{
        d=((n+1)/2)*(-1);}
    }
    printf("%lld", d);
    return 0;
}
