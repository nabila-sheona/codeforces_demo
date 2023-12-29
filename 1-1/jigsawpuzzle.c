#include<stdio.h>
int main()
{
     long long int i,t,m,n,d,e;
    scanf("%lld", &t);
    for(i=0;i<t;i++){
      scanf("%lld %lld", &m, &n);
      d=m*n;
      e=(m)*(n-1)+n*(m-1);
      if(d>=e){
      printf("YES\n");}
      else{
      printf("NO\n");}

    }
return 0;
}
