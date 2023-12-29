#include<stdio.h>
int main()
{
    long long int n,k,d,e;
    scanf("%lld %lld", &n, &k);
    while(n>=k){
    d=n/k;
    e=d%2;

    if(e==0){
    printf("NO");
    break;
    }
    else{
    printf("YES");
    break;
    }}
    return 0;
}
