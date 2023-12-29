#include<stdio.h>
int main()
{
    int n,i,m,t,s,x;
    scanf("%d", &t);
    while(t--){
    scanf("%d %d", &n, &m);
    s=0;
    for(i=0;i<n;i++){
    scanf("%d", &x);
    s+=x;}

    if(s==m){
    printf("YES\n");}
    else{
    printf("NO\n");}
    }
    return 0;
}
