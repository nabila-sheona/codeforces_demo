#include<stdio.h>
int main(){

     long long int a=0,b=0,n,arr[100000],c=1,d=0;

     scanf("%lld", &n);
     for(int i=0;i<n;i++){
         scanf("%lld", &arr[i]);

     }

     for(int i=0;i<n;i++){
         int p=arr[i];

         if(p==25){

         b++;

         }

         else if(p==50){
          if(b<1)
                {
                    c=0;
                    break;
                }
                else
                {
                    b=b-1;
                    d=d+1;
                }
         }

         else if(p==100)
            {
                if(b>=1&& d>=1)
                {
                    b=b-1;
                    d=d-1;
                }
                else if(b>=3)
                {
                    b=b-3;
                }
                else
                {
                    c=0;
                    break;
                }

            }
     }


     if(c==1){
     printf("YES");
     }
     else{
     printf("NO");
     }
     return 0;

}
