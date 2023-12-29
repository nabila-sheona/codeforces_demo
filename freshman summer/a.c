#include<stdio.h>
int main(){

   int t;
   scanf("%d", &t);
   while(t--){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){

        scanf("%d", &a[n]);

    }
    int m=0;
    for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){

        if(a[j]-a[i]==n-2 || a[j]-a[i]==-1){
            m= a[i-1];

        }
    }}

    printf("%d\n", m);

   }

}
