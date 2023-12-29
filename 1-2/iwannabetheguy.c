#include<stdio.h>
int main(){

    long long int m,n,p;

    scanf("%lld", &n);
    scanf("%lld", &m);

    long long int a[100000],c=0,d=0;
    for(int i=0;i<m;i++){

     scanf("%lld", &a[i]);

    }

    scanf("%lld", &p);

    for(int i=m;i<m+p;i++){

    scanf("%lld", &a[i]);
    }


    for(int i=0; i<(m+p); i++)
    {
        for(int j=i+1; j<(m+p); j++)
        {
            if(a[i]>a[j])
            {
                long long int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

     for(int i=0; i<(m+p); i++)
    {

     if(a[i]!=a[i+1]){
    c++;

     }

    }

    if(c==n){

        printf("I become the guy.");
    }

    else{

        printf("Oh, my keyboard!");
    }


return 0;

}
