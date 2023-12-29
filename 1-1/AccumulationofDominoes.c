#include <stdio.h>
int main()
{
long long m, l, n, x;
scanf("%lld %lld", &n, &m);
if(m==1){
printf("%d", n-1);

}
else if(m>1){
        l=n*(m-1);
printf("%lld", l);

}
return 0;
}
