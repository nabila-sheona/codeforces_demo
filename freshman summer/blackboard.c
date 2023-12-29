#include<stdio.h>
int main(){

   int t;
   scanf("%d", &t);
   while(t--){
   long long int n,m;
    scanf("%lld", &n);
   long long int a[n];
    for(int i=0;i<n;i++){

        scanf("%lld", &a[i]);


    }

     for(int i=0;i<n-1;i++){

      for(int j=i+1;j<n;j++){
  for(int k=0;k<n;k++){
//       if(a[i]-a[j]==a[k] || a[i]-a[j]==-a[k]  && k!=i && k!=j){
//
//        m=a[k];
//        break;
//       }



   if(a[i]+a[j]==a[k] && k!=i && k!=j){

        m=a[k];
        break;
       }
        }
     }}





    printf("%lld\n", m);

   }
   return 0;

}
