#include<stdio.h>
int main(){

    int t;
    scanf("%d", &t);
    while(t--){
    long long int n,k=9;
    scanf("%lld", &n);
    for(int i=0;i<n;i++){
    if(i==0){
    printf("%lld", k);

    k--;
    }
    else{


    printf("%lld", k);

    k++;

    }

    if(k == 10){

    k = 0;
    }

    }
    printf("\n");
    }
    return 0;

}
