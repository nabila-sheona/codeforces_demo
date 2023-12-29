#include<stdio.h>
int main()
{
    int i,t,a,b,c,d,e,f;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
     scanf("%d %d %d", &a, &b, &c);
     d=a+b;
     e=b+c;
     f=a+c;
     if(d==c|| e==a || f==b){
     printf("YES\n");}
     else{
     printf("NO\n");}


    }


    return 0;

    }
