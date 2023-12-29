#include<stdio.h>
int main(){
int n, m, a;
long long x, y, sum;

scanf("%d %d %d", &n, &m, &a);
 x=m*n;
 y=a*a;
 sum=x/y;

    if (x%y!=0) {
    a=a+1;
    }
    printf("%lld", a);
    return 0;


}
