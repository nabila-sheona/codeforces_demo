#include<stdio.h>
#include<string.h>
int main()
{

    int i;
    char a[1000],c;
    scanf("%s", a);
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]=='.')
        {
             printf("0");
        }
        if(a[i]=='-' && a[i+1]=='.')
        {
             printf("1");
            ++i;

        }
        if(a[i]=='-' && a[i+1]=='-')
        {
              printf("2");
            ++i;
        }
    }

    return 0;
}
