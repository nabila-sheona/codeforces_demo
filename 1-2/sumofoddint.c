#include<stdio.h>
int main(){

  long long int t,n,k;
    scanf("%lld", &t);
    while(t--){
    scanf("%lld %lld", &n, &k);

    if(k * k <= n && n % 2 == k % 2){
    printf("YES\n");
    }
    else{
     printf("NO\n");
    }

    }

    return 0;

}
