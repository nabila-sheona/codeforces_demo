#include<stdio.h>

int main(){
int t;
scanf("%d", &t);
while(t--){
    int n,a[10000];
    scanf("%d", &n);

    for(int i=1;i<=n;i++){

    scanf("%d", &a[i]);
    }

    int s=a[1],c=1,d=0;

    for(int i=2;i<=n;i++){
    if(a[i]==s){
    c++;
    }
    else{
    d=i;

    }


    }

    if(c==1){
    printf("1\n");
    }

    else{

    printf("%d\n", d);
    }
}
    return 0;




}
