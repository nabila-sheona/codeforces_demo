#include<stdio.h>
int main(){

    long long int n,t,l=0;
    scanf("%lld", &t);
    while(t--){
      long long int l=0,m=0;
       scanf("%lld", &n);
    int a[n];
       for(int i=1;i<=n;i++){
       scanf("%lld", &a[i]);
       }


        if(n<3){

        printf("No\n");
       }
       else{
       for(int i=1;i<=n;i++){
       for(int j=i+1;j<=n;j++){
       for(int k=j+1;k<=n;k++){
       int m=a[i]+a[j]+a[k];
       if(m%2==1){
        l=0;
       printf("Yes\n%d %d %d\n", i,j,k);

       goto p;
       }
       else{

        l=1;
       }


       }
       }
       }

      p: if(l==1){

        printf("No\n");
       }
       }


    }
return 0;
}
