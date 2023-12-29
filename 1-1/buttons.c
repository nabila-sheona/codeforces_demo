#include<stdio.h>
#include<math.h>
int main(){

    long long int n,p,k;
    scanf("%lld", &n);

    printf("%lld", n*(n-1)*(n+1)/6+n);
    return 0;

}
