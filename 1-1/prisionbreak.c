#include<stdio.h>
int main()
{
    int i,t,a,b,m;

    scanf("%d", &t);
    for(i=0;i<t;i++){
    scanf("%d %d", &a, &b);
    m=a*b;
    printf("%d\n", m);
    }
  return 0;
}
