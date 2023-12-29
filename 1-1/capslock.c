#include<stdio.h>
#include<string.h>
#include<ctype.h>

//int main(){
//char s[1000];
//scanf("%s", s);
//
//
//for(int i=0;i<strlen(s);i++){
//char c;
//          if(s[i]==s[0]){
//
//                    c=toupper(s[i]);
//               printf("%c", c);
//               }
//
//
//               if(s[i]!=s[0]){
//
//               c=tolower(s[i]);
//               printf("%c", c);}
//    }
//
//
//    return 0;
//    }
//


int main()
{
    int c = 0,d = 0;
    char s[10000];
    scanf("%s", s);

    for(int i = 1; i<strlen(s); i++)
    {
        if(islower(s[i]))
        {
            c++;
        }
    }
    for(int i = 0; i<strlen(s); i++)
    {
        if(isupper(s[i]))
        {
            d++;
        }
    }
    if(islower(s[0]) && c==0)
    {
        s[0] = toupper(s[0]);
        for(int i = 1; i < strlen(s); i++)
        {
            s[i] = tolower(s[i]);
        }
        printf("%s", s);

        return 0;
    }
    if(d==strlen(s))
    {
        for(int i=0; i<strlen(s); i++)
        {
            s[i]=tolower(s[i]);
        }
        printf("%s", s);
    }
    else
    {
  printf("%s", s);
    }
    return 0;
}
