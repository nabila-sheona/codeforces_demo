#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    long long int n,k;

    scanf("%lld %lld", &n, &k);

    if(k%2==0 && n%2){
    printf("NO\n");
    }
    else{
    printf("YES\n");
    }
    }
return 0;
}
