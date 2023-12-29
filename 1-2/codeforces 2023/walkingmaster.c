#include<stdio.h>
int main(){

int t;
scanf("%d", &t);
while(t--){
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if(d>=b && a-b+d>=c){

    printf("%lld\n", (d-b)+(a-b-c+d));
    }
    else{

     printf("-1\n");

    }

}
return 0;
}
