#include<stdio.h>
int main(){
 int i,t,a,b,d,arr[4];

 scanf("%d", &t);
 for(i=0;i<t;i++){

 for(int j=0; j<4; j++)
    {
        scanf("%d", &arr[j]);
    }
    int min1,min2,max1,max2;


    if(arr[0]<arr[1]){
    min1=arr[0];

    }
    else{
    min1=arr[1];
    }

    if(arr[0]>arr[1]){
    max1=arr[0];

    }
    else{
    max1=arr[1];
    }
 if(arr[2]<arr[3]){
    min2=arr[2];

    }
    else{
    min2=arr[3];
    }
    if(arr[2]>arr[3]){
    max2=arr[2];

    }
    else{
    max2=arr[3];
    }


    if(min1>max2 || max1<min2){
    printf("NO\n");
    }
    else{
     printf("YES\n");
    }


 }
 return 0;

}
