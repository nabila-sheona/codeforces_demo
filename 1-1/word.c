#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{

    char s[10000],c;
    int up=0, low=0;
    scanf("%s", s);
    for(int i=0; i<strlen(s); i++)
    {
        if(isupper(s[i]))
        {
            up++;
        }
        else
        {
            low++;
        }
    }
    if(up>low)
    {
        char c;
        for(int i=0; i<strlen(s); i++)
        {
            c=toupper(s[i]);
               printf("%c", c);


        }
    }

    else
    {

        for(int i=0; i<strlen(s); i++)
        {
            c=tolower(s[i]);
               printf("%c", c);


        }

    }



    return 0;
}
