#include<stdio.h>
int main(){

    int i,n,x,cop=0,untr=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &x);
        if(x>0){
        cop+=x;}
        else{
        if(cop<1){
        untr++;}
        else{
        --cop;
        }
        }
    }
    printf("%d", untr);
    return 0;

}
