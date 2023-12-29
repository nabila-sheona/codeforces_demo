#include<stdio.h>
int main()
{
    int a,b,y,m,t,best,i;
    scanf("%d %d", &y, &m);
    if(y>m)
    {
        best=y;
    }
    else
    {
        best=m;
    }

    a=best-1;
    t=(6-a);
    b=6;

    for(int i=1;i<=6; i++){

        if(t%i==0 && b%i==0){

            t/=i;
            b/=i;
        }
    }

    printf("%d", t);
     printf("/");
      printf("%d", b);
    return 0;


}
