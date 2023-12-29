#include<stdio.h>
int main(){
     int t;
     scanf("%d", &t);
     while(t--){
     int n,x;
     scanf("%d %d", &n,&x);
     int a[2*n];

     for(int i=0; i<n*2; i++){

     scanf("%d", &a[i]);

     }

     for(int i=0; i<n*2; i++){

     for(int j=i+1; j<n*2; j++){

     if(a[i]>a[j]){

     int temp=a[i];
     a[i]=a[j];
     a[j]=temp;

     }

     }

     }

     int c=0;

     for(int i=0; i<n; i++){

      if (a[n+i]-a[i]<x) {
      c=1;
      }

     }
     if(c==0){
     printf("YES\n");

     }

     else{

     printf("NO\n");
     }
     }

return 0;
}
