#include<stdio.h>
#include<string.h>
int main()
{

    int t,n,a[10000];
    char s[1000];
    scanf("%d", &t);
    while(t--)
    {
        int max=0;
        scanf("%d", &n);
        scanf("%s", s);

        for(int i=0; i<strlen(s); i++)
        {

            a[i]=s[i]-96;

        }



        for(int i=0; i<strlen(s); i++)
        {

            if(a[i]>max)
            {
                max=a[i];

            }

        }

        printf("%d\n", max);
    }

    return 0;
}
