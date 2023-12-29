#include<stdio.h>
int main(){

   int t;
   scanf("%d", &t);
   while(t--){
   long long int x,i;
   scanf("%lld", &x);
   for(i=2; i<x; i=i+2){
   if(x%i==0){
   printf("YES\n");

   break;

   }

   }

   if(x%i!=0){
   printf("NO\n");

   }

   }
 return 0;
}
