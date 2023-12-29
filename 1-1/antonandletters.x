#include<stdio.h>
#include<string.h>
int main(){

int a,b=0,i;
char c,d,e;
while(scanf("%s", c)){

 if(c=='{}' || c==',' || c==' ')
            {
                continue;
            }
if(c>='a' && c<='z'){

d++;
}

printf("%c", c[i]);

}


return 0;
}
