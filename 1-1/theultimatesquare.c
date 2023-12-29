#include<stdio.h>
int main(){

    long long int a=0,x,b,n,t;
    scanf("%lld", &t);
    while(t--){
    scanf("%lld", &n);



    if(n%2!=0){
    x=(n/2)+1;

    }
    else{

    x=n/2;
   }

   printf("%lld\n", x);



    }

    return 0;

}
