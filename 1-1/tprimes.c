#include<stdio.h>
#include<math.h>

int main()
{
    int a[1000000]={0};
    for(int i=2; i<=1000000; i++)
    {
        if(a[i]==0)
        {
           for(int j=2; i*j<=1000000; j++)
           {
               a[i*j]=1;
           }
        }
    }
    int n;
    scanf("%d", &n);
    while(n--){
    long long int b;
    long long int sqr;
    for(int i=0; i<n; i++)
    {
        scanf("%lld", &b);
        sqr=sqrt(b);
        if(b==1){
        printf("NO\n");
        }
        else if((sqr*sqr==b) && (a[sqr]==0))
        {
           printf("YES\n");
        }
        else
        {
           printf("NO\n");
        }
    }
}

return 0;
}
