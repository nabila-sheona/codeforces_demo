#include<stdio.h>
int main(){

   long long int t,i,j,n,x,y,ans,sum,tot,a[10000];
    scanf("%lld", &t);

    while(t--){

     scanf("%lld", &n);
     sum=0;
     ans=0;
     for(long long int k=1;k<=n;k++){
     scanf("%lld", &a[k]);
     }

     for(i=1,j=2;j<=n;j++){
     x=a[i]*a[j];
     y=1;
     a[i]=x;
     a[j]=y;
     }
     for(long long int k=1;k<=n;k++){
     ans+=a[k];
     }

     if(ans>sum){
     sum=ans;
     }



    tot=2022*sum;

    printf("%lld\n", tot);
    }


}
