#include<stdio.h>
int main()
{

    int i,n,a=1,o=1;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);

    }

    for( i=1; i<n; i++)
    {

            if (arr[i] >= arr[i - 1])
            {
                a++;

                if(a>o)
                {
                    o=a;
                }
                else
                {
                    o=o;

                }
            }
            else
            {
                a= 1;

            }

    }

        printf("%d", o);
        return 0;
    }
