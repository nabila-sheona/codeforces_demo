#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,x=0;
    char s[100];
//    for(b=0; b<a; b++)

    scanf("{%s}", s);
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='{}' || s[i]==',' || s[i]=='   ')
            {
                continue;
            }
            else
            {
                if(s[i]!=s[i+1])
                {
                    x++;
                }
            }

    }
    printf("%d", x-1);
    return 0;


}

