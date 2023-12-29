#include<stdio.h>
int main()
{
    long long n,a,b,i,t,p;
    scanf("%lld", &t);

    for(i=0;i<t;i++)
    {
         scanf("%lld %lld %lld", &n, &a, &b);

            if((a*2)<=b)
         {
             p=n*a;
            printf("%lld\n", p);
         }
         else{
            if(n%2==0){
             p=(n/2)*b;

         printf("%lld\n", p);}
             else{
                  p=((n/2)*b)+a;
                  printf("%lld\n", p);

             }
         }

         }

    return 0;
}
