#include<stdio.h>
int main()
{
int i,j,q,x,n,sum=0;
scanf("%d", &q);
for(i=0;i<q;i++){
scanf("%d", &n);
for(j=0;j<n;j++){
scanf("%d", &x);
sum=sum+x;
}
printf("%d\n", (sum+n-1)/n);
sum=0;
}
return 0;

}
