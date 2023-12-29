#include<stdio.h>


int main()
{

    int n,a[1000]={1},b[10000],c,l,t;
    scanf("%d", &t);
    while(t--)
    {
    int max=0;

    scanf("%d", &n);

     for(int i=0; i<n; i++)
        {

            scanf("%d", &a[i]);
        }

        for(int i=0; i<n; i++)
        {

            if(a[i]>max)
            {
                max=a[i];

            }

        }

        int lmax=max;


        for(int i=0; i<n; i++)
        {
            b[i]=max-a[i];

            if(b[i]>0 && b[i]<lmax)
            {
                lmax=b[i];

            }


        }





        for(int i=0; i<n; i++)
        {

           if(a[i]!=max){
            a[i]=a[i]-max;
            printf("%d ", a[i]);
            continue;
           }




           if(a[i]==max){

            a[i]=max-a[n-2];
            printf("%d ", a[i]-lmax);
            continue;

           }

        }

printf("\n");

    }

    return 0;
    }
