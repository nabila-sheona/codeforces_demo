#include<stdio.h>
int main(){


    int m,n;
    scanf("%d %d", &n, &m);

    if(n>m){

        int t=n;
        n=m;
        m=t;
    }
    if(n%2==0){
    printf("Malvika");

    }

    else{

      printf("Akshat");
    }
    return 0;
}
