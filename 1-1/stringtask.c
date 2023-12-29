#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t;
    char s[1000], a[1000];
    gets(s);

    for(i=0,j=0; i<strlen(s); i++)
    {
        if(s[i]!='a' && s[i]!='A' && s[i]!='y' && s[i]!='Y'&& s[i]!='E' && s[i]!='e' && s[i]!='I' && s[i]!='i' && s[i]!='o' && s[i]!='O' && s[i]!='U' && s[i]!='u' )
        { a[j]='.';
            j++;
            if(s[i]>=65 && s[i]<=90)
            {
                a[j]=s[i]+32;
                j++;
            }
            else
            {
                a[j]=s[i];
                j++;
            }
        }
    }
    a[j]='\0';
    puts(a);
}
