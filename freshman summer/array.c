#include<stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n,k;
        scanf("%d %d", &n, &k);
        int m=0;
    ///    if(k==1)
       // {
         //   printf("%d\n", n);
           // continue;
        //}
        for(int i=0; i<=n; i++)
        {
            int d=i%k;

            if(d==0)
            {
                m++;
            }


        }

if(n<m){
    m=n;
}
        printf("%d\n", m);
    }



}


