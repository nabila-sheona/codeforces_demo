#include<stdio.h>

int main()
{
    char S[1000];
    gets(S);
    if(S[0]>='a' && S[0]<='z'){
    S[0]=S[0]-32;
    printf("%s", S);
    }
    else{
     printf("%s", S);

    }

    return 0;
}
