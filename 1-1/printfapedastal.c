#include<stdio.h>
int main(){

    int n,a,b,c,t;
    scanf("%d", &t);
    while(t--){
    scanf("%d", &n);
    if(n%3==0){
    b=n/3;
    a=b+1;
    c=n-(a+b);

    }

    else{
    b=n/3+1;
    a=b+1;
    c=n-(a+b);

    if(c==b){
    c--;
    b++;
    }

    if(c==0){
    c++;
    b--;

    }
    }
    printf("%d %d %d\n", b, a,c);
    }





    return 0;

}
