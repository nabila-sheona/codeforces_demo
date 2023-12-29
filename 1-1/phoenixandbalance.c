#include<stdio.h>
#include<math.h>
int main(){

long long int a[31], b, c,d,n,s1=0,s2=0,t;
scanf("%lld", &t);
while(t--){
scanf("%lld", &n);
 if(n==2){
            printf("2\n");
            continue;
        }
        else{
for(int i=0;i<=n;i++){

            a[i]=pow(2,i);

}
for(int i=0;i<=n;i++){

s1=s1+a[i];
s2=s2+a[n-1];
//if(i==1 || i==n){
//
//    s1=s1+a[i];
//}
//
//  if(i>1 && i<n){
//
//
//    s2=s2+a[i];
//  }
}
printf("%lld\n", s2-s1);
s1=0;
s2=0;
}
}
return 0;
}
