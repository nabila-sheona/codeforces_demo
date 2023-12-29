#include<stdio.h>
int main(){
    int i,t,n,d=0,k,m=0,j;
    scanf("%d", &t);
    for(i=1;i<=t;i++){

    scanf("%d", &n);
    int a[n],d[n];
    for(k=0;k<n;k++){
    scanf("%d", &a[n]);
    for(j=1; j<=a[n]; j++){
    if(a[n]%j==0 && a[n-1]%j==0);
        m++;

    }
    }
    if(m>0){
    printf("%d\n", m-1);
    }
    else{

         printf("0\n");
    }

    }
    return 0;
}
