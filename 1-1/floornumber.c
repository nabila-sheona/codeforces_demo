#include<stdio.h>
int main(){

int n,k,t;

scanf("%d", &t);

while(t--){

   scanf("%d %d", &n, &k);

   int c=2, ans=1;
   while(c<n){

       c+=k;
       ans++;
   }

   printf("%d\n", ans);

}
return 0;
}
