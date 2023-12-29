#include<stdio.h>
#include<math.h>
int main(){

    long long int m,n;
    scanf("%lld \n %lld", &n, &m);
    long long int p=pow(2,n);
    printf("%lld", m%p);
    return 0;

}
