#include<stdio.h>
#include<string.h>
int main(){

    long long int n,ans=0;
    scanf("%lld", &n);
    long long int s[n];


     for(long long int i=1;i<=n;i++){

    scanf("%lld", &s[i]);
    }

   long long int sum = 0, max = s[n];
    for(long long int i=n; i>0; i--){
        if(s[i] >= max){
            sum += max;
            max--;
        }
        else if(max > s[i]){
            sum += s[i];
            max = s[i] - 1;
        }
        if(max == 0)
            break;
    }
    printf("%lld", sum);
    return 0;
}
