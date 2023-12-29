#include<stdio.h>

int main(){

    long long int a,b,t,n;
    scanf("%lld", &t);
    while(t--){
    scanf("%lld", &n);
    a=n%2020;
    b=n/2020;
    if( a<=b){
            printf("YES\n");
        }
        else{
          printf("NO\n");
        }
    }

    return 0;

}
