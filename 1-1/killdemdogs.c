#include<stdio.h>
#include<math.h>
int main()
{

    long long int n,i=1,j=1,ans,tot=0, x,y,pop;

    int t;
    scanf("%d", &t);
    while(t--)
    {


        tot=0;
        scanf("%lld", &n);



        for(long long int k=1; k<=n; k++)
        {


            if(k%2!=0){



                ans=i*j;
                tot=tot+ans;


               if(j<=n){
                    j++;

                ans=i*j;
                tot=tot+ans;
                i++;
               }

            }

             if(k%2==0){


                ans=i*j;
                tot=tot+ans;
                if(i<n){
                i++;
                 ans=i*j;
                tot=tot+ans;
                j++;
                }


            }

        }

//        for(i=2,j=j; i<=n, j<=n; i++,j++)
//        {
//
//            ans=i*j;
//
//
//
//            tot=tot+ans;
//        }



        tot=tot*2022;

        long long int p=pow(10,9)+7;


        pop=tot%p;

        printf("%lld\n", pop);

    }

    return 0;

}
