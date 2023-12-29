#include<stdio.h>
#include<string.h>
int main(){

    int c=0;
    char s[10000];

    scanf("%s", s);
    for(int i=0;i<6;i++){

    if(s[i]=='1'){
    c++;
    }


    }


    printf("%d", c);
    return 0;
}
