#include<stdio.h>
int main(){

     long long int h,s,q;

     scanf("%lld\n %lld\n %lld", &h, &s, &q);

     for(int i=0;i<q;i++){

     h=h-s;
     printf("%lld\n", h);
     }

return 0;

}
