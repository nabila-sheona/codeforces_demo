#include<stdio.h>
#include<string.h>
int main()
{

    int a,b,t;
    char c[1000],d[10000],e[100000];
    scanf("%d", &t);
    while(t--)
    {
        a=0;
        scanf("%s", c);
        int l=strlen(c);


        for(int i=0; i<l/2; i++)
        {

            if(l%2!=0)
            {

                a=0;
                break;
            }

            if(l==1)
            {

                a=0;
                break;

            }
            if(c[i]!=c[i+l/2])
            {
                a=0;
                break;
            }
            else
            {
                a=1;

            }

        }

        if(a==1)
        {

            printf("YES\n");

        }

        else
        {
            printf("NO\n");

        }



    }
    return 0;




}
