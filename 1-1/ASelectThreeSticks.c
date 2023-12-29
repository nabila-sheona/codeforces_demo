#include<stdio.h>
int main()
{
    int i,t,n1,n2,n3,d=0,best=0;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d %d", &n1, &n2, &n3);
        if(n1==n2 && n2==n3)
        {
            printf("%d", d);
        }
        else if(n1!=n2 && n2!=n3)
        {
            if(n1>n2 && n1>n3)
            {
                best= n1;
                if(n2>n3)
                {
                    d=best-n3;
                    printf("%d\n", d);
                }
                else
                {
                    d=best-n2;
                    printf("%d\n", d);
                }
            }
            else if(n2>n3 && n2>n1)
            {
                best=n2;
                if(n3>n1)
                {
                    d=best-n1;
                    printf("%d\n", d);
                }
                else
                {
                    d=best-n3;
                    printf("%d\n", d);

                }

            }


            else{
                best=n3;
                if(n1>n2)
                {
                     d=best-n2;
                     printf("%d\n", d);
                }
                else
                {
                     d=best-n1;
                     printf("%d\n", d);

                }

            }


        }

        else
        {
            if(n1==n2 && n1!=n3)
            {
                printf("%d\n", d=n1-n3);
            }

            else if(n2==n3 && n2!=n1)
            {
                printf("%d\n", d=n2-n1);

            }
            else if(n1==n3 && n1!=n2)
            {
                printf("%d\n", d=n1-n2);

            }

        }


    }
    return 0;
}

