#include<stdio.h>
int main()
{
    int i,t,d1,d2,d3,a,b,c,ans;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        d1=(a-1);
        if(b>c){
        d2=(b-c)+(c-1);}
        else{

              d2=(c-b)+(c-1);
        }
         ans = 0;
    if(d1 <= d2){
        ans += 1;}
    if (d1 >= d2){
        ans += 2;}


            printf("%d\n", ans);

    }
    return 0;
}
