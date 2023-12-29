#include<stdio.h>
int main()
{
    float n,i,a,b=0;
    float d;
    scanf("%f", &n);
    for(i=1;i<=n;i++){
    scanf("%f", &a);
    b=b+a;
     }
      d=b/n;
    printf("%f", d);

}
