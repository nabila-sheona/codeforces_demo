#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

int k,i;
char s1[10000],s2[10000];


scanf("%s\n%s", s1,s2);
long sum1=0,sum2=0;
        for(i=0; i<strlen(s1); i++)
        {
            if(s1[i]>='A' && s1[i]<='Z')
                s1[i]=s1[i]-'A'+97;

            if(s2[i]>='A'&& s2[i]<='Z')
                s2[i]=s2[i]-'A'+97;
        }
        for(i=0; i<strlen(s2); i++)
        {
            if(s1[i]>s2[i])
                {
                   printf("1\n");
                    return 0;}

            if(s2[i]>s1[i])
                {
                    printf("-1\n");
                    return 0;
                }

        }
        printf("0\n");
return 0;

}
