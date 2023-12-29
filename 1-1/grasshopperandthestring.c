#include<stdio.h>
#include<string.h>

int main(){

    char s[1000];
    int i, t, l, mx=0, c=1;
    gets(s);
    l = strlen(s);
    for(i=0; i<l; i++)
    {
        if((s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y'))
        {
            c = 1;
        }
        else
        {
            c++;
        }
        if(c > mx)
            {
                mx = c;
            }
    }


    printf("%d", mx);
    return 0;


}
