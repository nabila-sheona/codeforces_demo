#include<stdio.h>
int main(){
    int a,b,c,d,y,n,x;
    scanf("%d %d %d", &n, &a, &b);
    c=a+1;
    d=n-b;
    if(c>d){

        printf("%d\n", n - c + 1);
    }
    else{
            printf("%d\n", n -(d) + 1);


    }

    return 0;


}
