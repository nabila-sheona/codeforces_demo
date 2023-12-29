#include<stdio.h>
#include<string.h>
int main(){

    int n,k,t;
    char s[1000];


    scanf("%d\n", &t);
    while(t--){
    scanf("%d %d", &n, &k);
     int x=97;
    for(int i=0;i<n;++i){

    printf("%c", x+i%k);
    x++;
    }
    printf("\n");
    }
return 0;
}
