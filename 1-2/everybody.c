#include<stdio.h>
int main(){

     int t;
     scanf("%d", &t);
     while(t--){
         long long int n;
         scanf("%lld", &n);
        long long int  a[n];
         for(int i=0;i<n;i++){
         scanf("%lld", &a[i]);

         }
         long long int c=0;


         for(int i=1;i<n;i++){


         if(a[i]%2==0 && a[i-1]%2==0){
         c++;

         }

         else if(a[i]%2!=0 && a[i-1]%2!=0){
         c++;

         }

         else{

            continue;
         }

         }

         printf("%lld\n", c);

     }
return 0;
}
