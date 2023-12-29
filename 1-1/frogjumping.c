#include<stdio.h>
int main()
{

    long long i,t,a,b,k,j,h;
    scanf("%lld", &t);
    for(i=0; i<t; i++)
    {
    ;
        scanf("%lld %lld %lld", &a, &b, &k);
            if(k%2==0){
                     h=((a-b)*(k/2));

            }
        else{
           h=((a-b)*(k/2))+a;
        }
            printf("%lld\n", h);

    }
    return 0;

}
