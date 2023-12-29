#include<stdio.h>
int main(){

    int b,c=0,n,i;
    scanf("%d", &n);
    int a[5]={0};
    for(i=0;i<n;i++){

    scanf("%d", &b);
    a[b]++;


    }
    int taxi=0;

    taxi=a[4]+a[2]/2+a[3];


    a[1]-=a[3];


    if(a[2]%2==1){

        taxi++;
        a[1]=a[1]-2;
    }

    if(a[1]>0){

        taxi=taxi+(a[1]+3)/4;
    }

    printf("%d", taxi);



    return 0;





}
