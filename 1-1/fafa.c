#include<stdio.h>
int main()
{
    int n,l,d=0;
    scanf("%d", &n);
     for(l=1; l<n; l++){
            if(n%l==0)
            {
                d++;
            }

            }
    printf("%d", d);

    return 0;
     }


