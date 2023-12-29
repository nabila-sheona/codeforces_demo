#include<stdio.h>
int main()
{
    int i,t,x,y,max,ans;
    scanf("%d", &t);
    for(i=0;i<t;i++){
     scanf("%d %d", &x, &y);
     if(x>y){
     max=x;}
     else{
     max=y;}
     ans=max*2-1;
     if(x==y){
     ans++;
    }
       printf("%d\n", ans);

    }
    return 0;

}
