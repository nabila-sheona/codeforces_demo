#include<stdio.h>
int main(){

     long long int a,d;

     scanf("%lld %lld", &a, &d);

     if(a>d){
     printf(">");
     }

     if(a==d){

         printf("=");

     }

     if(a<d)
        {
     printf("<");

     }


     return 0;

}
