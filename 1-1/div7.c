#include<stdio.h>
int main()
{
    int i,t,n,a,b,ab;
    scanf("%d", &t);
    for(i=0;i<t;i++){
    scanf("%d", &n);
    if(n%7==0){
    printf("%d\n", n);}
    else if(n%7!=0){
            a=n%7;
    b=7-a;
    ab=n%10;
    if(ab+b<10){

        n=n+b;
    }
    else{
        n=n-a;
    }
     printf("%d\n", n);
    }
    }
    return 0;
        }
