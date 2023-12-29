#include<stdio.h>
int main(){

int x,y,a,b,d,m,i;
scanf("%d %d", &a,&b);
  int h = a;

    while(a >= b)
    {
        d = a / b;
        h += d;
        m = a % b;
        a = d + m;
    }
printf("%d", h);

return 0;
}
