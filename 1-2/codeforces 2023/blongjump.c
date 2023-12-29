#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    int m=1;
    long long int x,y;

    scanf("%lld %lld", &x, &y);

    if(x==y){
    printf("%lld\n", x+m);
    }
    else{
   if(x>y){

   printf("%lld\n", x-2);
   }

   else{

   printf("%lld\n", y-1);


   }
    }
    }
return 0;
}
