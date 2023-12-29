#include<stdio.h>
int main()
{
    int i,t,x,y,n,a,z;
    scanf("%d", &t);

    for(i=0;i<t;i++){
     scanf("%d %d %d", &x, &y, &n);
     a=n%x;

     if(a-y>=0){
      n=n-(a-y);
    }
    else{
        n=n-a-x+y;
    }
     printf("%d\n", n);
    }
    return 0;
}
