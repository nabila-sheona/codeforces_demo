#include<stdio.h>
int main(){

     int t;
     scanf("%d", &t);
     while(t--){
            int m,n;
     scanf("%d %d", &n, &m);
     int a[1000],b[1000];
     int ans=0;
     for(int i=0;i<n;i++){
     scanf("%d", &a[i]);

     }

      for(int i=0;i<m;i++){
     scanf("%d", &b[i]);

     }

      for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
           if(a[i]==b[j]){
           ans++;

    }

     }

     }


    printf("%d\n", ans);


     }

}
