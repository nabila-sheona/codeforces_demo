#include<stdio.h>
#include<string.h>
int main()
{

    int a,b=0;
    char s[1000];
    scanf("%s", s);
    for(a=0; a<strlen(s); a++)
    {
        if(s[a]=='H' || s[a]=='Q' || s[a]=='9')
        {
            b=1;
            break;

        }

        else
        {
            b=0;

        }



    }

    if(b==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
