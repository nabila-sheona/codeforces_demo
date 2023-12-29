#include<stdio.h>
int main(){

     long long int a,b=0,c,d,n,x;
     char s;
     scanf("%lld %lld", &n, &x);
     while(n--){

     scanf(" %c %lld", &s, &a);

     if(s=='+'){
     x=x+a;
     }

     else if(s=='-'){
     if(x>=a){

     x=x-a;
     }

     else{
     b++;
     }
     }
     }
     printf("%lld %lld\n", x, b);

     return 0;

}
