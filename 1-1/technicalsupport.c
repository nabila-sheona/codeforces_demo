#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,n,q=0,a=0,j,k;
    char s[1000];
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        q=0;

        scanf("%d", &n);
            scanf("%s", s);
            for(k=0; k<strlen(s); k++)
            {
                if(s[k]=='A')
                {
                    q--;
                }
                else
                {
                    q++;
                }

                 if(q<=0){
                q=0;
            }
            }


            if(q==0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }



    }
    return 0;
}
