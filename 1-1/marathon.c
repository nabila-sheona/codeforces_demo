#include<stdio.h>
int main()
{
    int a,b,c,d,i,t,s;
    scanf("%d", &t);
    for(i=0; i<t; i++){
    scanf("%d %d %d %d", &a, &b, &c, &d);
    s=0;
    if(a<b){
    s++;}
    if(a<c){
    s++;}
    if(a<d){
    s++;}
    if(a>b && a>c && a>d){
    s=0;}
    printf("%d\n", s);
    }
    return 0;

}
