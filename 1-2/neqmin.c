#include<stdio.h>
int main(){

    int n,l,m[200000];
   scanf("%d", &n);

   for(int i=0;i<n;i++){
   scanf("%d", &m[i]);
   }
   l=0;

   for(int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            if(m[j]==l){
                l++;
            }

        }


        printf("%d\n", l);
   }

return 0;


   }



