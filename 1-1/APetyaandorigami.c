#include<stdio.h>
int main()
{
    int n,k,r,b,g,t;
    scanf("%d %d", &n, &k);
    r=(2*n)/k;
       if((n*2)%k)
       r++;
    b=(8*n)/k;
    if((n*8)%k)
        b++;
    g=(5*n)/k;
    if((n*5)%k)
      g++;
    t=r+b+g;
    printf("%d", t);
    return 0;
}
