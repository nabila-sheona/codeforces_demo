#include<stdio.h>
int main(){


    long long int n;
    scanf("%lld", &n);

    while(n--){

       long long int p;
        scanf("%lld", &p);
       long long int c=0, a[100000]={0},b=0;
        for(int i=0;i<p;i++){

        scanf("%lld", &a[i]);

        }

         for(int i=0;i<p;i++){

       if(a[i]==0){

        for(int j=i-1;j>=0 ; j--){

            if(a[j]!=0){

            for(int k=j-1;k>=0;k--){

            if(a[k]>a[j]){
               int temp=a[j];

                a[j]=a[k];

                a[k]=temp;

            }
            }

                c+=a[j];
                a[j]=0;


                break;
            }

            else{
                continue;
            }
            }


        }
        }
        printf("%lld\n", c);

    }

    return 0;
}
