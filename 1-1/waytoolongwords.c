#include<stdio.h>
#include<string.h>
int main()
{

    int i,t,l,j,x,y;
    char s[1000];
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%s", s);
        for(j=0; j<strlen(s); j++)
        {
            l=strlen(s);
            if(l>10)
            {
                printf("%c%d%c\n", s[0],l-2,s[l-1]);
                break;

            }
             else {printf("%s\n", s);
             break;

        }
        }
    }
    return 0;
    }








