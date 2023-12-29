#include<stdio.h>
int main()
{
    int n,m,l,j,i,k;
    scanf("%d %d", &n, &m);

    for(i=2;i<n;i++){
    if(n%i!=0){
    goto x;}
    }
   x: l=n+1;
    while(l<m){
    for(j=2;j<l;j++){
    if(l%j!=0)
    {
    goto y;
    }
    }
    l++;
    }
   y:  for(k=2; k<m; k++){
    if(m%k!=0){
        continue;}
    }
    if(m==l)
    {printf("YES");
        }
        else{ printf("NO");
        }


    return 0;

}
