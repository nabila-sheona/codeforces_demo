#include<stdio.h>
int main()
{

    int i=1,j=1,t,n;
    scanf("%d", &t);
    while(t--)
    {
        long long int sum=i*j, total=0;
        scanf("%d", &n);

        for(int k=1; k<=n; k++)
        {



                sum=i*j;
                total+=sum;

                if(i==n){

                    continue;
                }



//
                if(j!=n)
                {
                    j++;

                    sum=i*j;
                    total+=sum;
                i++;

                }

                if(j==n){

                   continue;
                }





        }
        total=total;
        printf("%lld\n", total);
    }

    return 0;

}
