#include<stdio.h>
int main()
{
    int i,x,mish,chris,m=0,c=0,f=0;
    scanf("%d", &x);
    for(i=0;i<x;i++){
    scanf("%d %d", &mish, &chris);
    if(mish>chris){
    m++;}
    else if(chris>mish){
    c++;
    }
    else{
    f++;}
    }
    if(m>c){
    printf("Mishka\n");

    }
    else if(c>m){
     printf("Chris\n");

    }
    else{

     printf("Friendship is magic!^^\n");}

     return 0;
}
