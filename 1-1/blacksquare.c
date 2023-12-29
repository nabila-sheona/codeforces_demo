#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(){

long long int i,a,b,c,d;
char s[1000000];


scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

scanf("%s", s);
long long int ans=0;
            for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='1')
                ans+=a;
            else if(s[i]=='2')
                ans+=b;
            else if(s[i]=='3')
                ans+=c;
            else if(s[i]=='4')
                ans+=d;
        }
                printf("%lld", ans);



return 0;
}
