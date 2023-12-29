#include<stdio.h>
#include<string.h>
int main(){

    int a,b,c=0,d;
    char s[100000];
    int t;
    scanf("%d", &t);
    while(t--){

    scanf("%d", &b);

    if(b!=5){

    printf("NO\n");}
else{
    a=b;

    scanf("%c", s);

    for(int j=0;j<strlen(s);j++){

    if(s=='T' || s=='i' || s=='m' || s=='u' || s=='r'){
    c++;
    }
    else{

    c=0;


    }
    }


    if(c==5 && a==5){
    printf("YES\n");
    }

    else{

    printf("NO\n");}

}


    }

  return 0;

}
