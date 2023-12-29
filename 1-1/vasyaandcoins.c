#include<stdio.h>
int main()
{
    long long t,n,m,a,b,z;
    scanf("%lld", &t);
    while(t--)
    {
    int x=0,y=0;
        scanf("%lld %lld", &n, &m);

      if(n==0)
  {
      printf("1\n");
  }
  else{
       x=n*1;
      y=m*2;
      z=x+y;


        printf("%lld\n", z+1);
  }
    }
    return 0;
}
