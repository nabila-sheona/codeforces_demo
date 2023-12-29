#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000], s2[1000];
    scanf("%s %s", s1, s2);

    for (int i = 0; i < strlen(s1); ++i)
    {


        if (s1[i] == s2[i])
        {
            s1[i] = '0';
        }
        else
        {
            s1[i] = '1';
        }
    }
    printf("%s", s1);
    return 0;
}
