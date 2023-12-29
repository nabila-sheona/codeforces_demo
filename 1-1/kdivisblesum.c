#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
    int n,k;
    scanf("%d %d", &n, &k);
     if(n==1){

        printf("%d\n", k);
        continue;
     }

    if(n==k){
    printf("1\n");
    continue;
    }

     if(n>k){

    int c=n/k;
    if(n%k!=0){
    c++;
    k*=c;
    }


    int a=k/n;
    if(k%n!=0){
    a++;
    }
    printf("%d\n", a);
    continue;
    }

     if(n<k){

    int c=k/n;

    if(k%n!=0){
    c++;
    }
    printf("%d\n", c);
    continue;

    }
    }
    return 0;
}
