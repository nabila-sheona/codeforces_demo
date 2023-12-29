#include<stdio.h>
int main(){
int a,b,c,min,max;
scanf("%d %d %d", &a, &b, &c);
if(a>b && a>c){

    int max=a;

    if(b>c){
        min=c;
    }
    else{
        min=b;
    }
    printf("%d", max-min);
}
if(b>a && b>c){
    int max=b;
     if(a>c){
        min=c;
    }
    else{
        min=a;
    }
    printf("%d", max-min);
}
if(c>a && c>b){
    int max=c;
     if(b>a){
        min=a;
    }
    else{
        min=b;
    }
    printf("%d", max-min);
}



return 0;
}
