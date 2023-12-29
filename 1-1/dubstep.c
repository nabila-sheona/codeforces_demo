#include<stdio.h>
#include<string.h>
int main(){

    int a,b,i,n,t,f=1;
    char s[1000];
    scanf("%s", s);
    for(i=0;i<strlen(s);i++){

        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){

             if(f==0)
            printf(" ");
            i=i+2;

        }
        else{

            printf("%c",s[i]);

            f=0;

        }

    }
    return 0;
}
