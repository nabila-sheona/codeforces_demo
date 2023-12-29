#include<stdio.h>
#include<string.h>
int main()
{
    int n,q=0,a=0,j,k;


        scanf("%d", &n);
         char s[n];
            scanf("%s", s);
            for(k=0; k<strlen(s); k++)
            {
                if(s[k]=='A')
                {
                    a++;
                }
                else if(s[k]=='D')
                {
                    q++;
                }
            }

            if(q>a)
            {
                printf("Danik\n");
            }
            else if(a>q)
            {
                printf("Anton\n");
            }
            else{
            printf("Friendship\n");
            }

    return 0;
}
