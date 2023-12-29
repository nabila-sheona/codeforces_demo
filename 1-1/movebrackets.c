#include<stdio.h>
#include<string.h>
int main(){

int n,k,c;
char s[10000];
scanf("%d", &n);
while(n--){
scanf("%d", &k);
scanf("%s", s);
int ans = 0,open = 0,close = 0;
        for(int i=0; i<k; i++){
            if(s[i] == '(' && s[i+1] == ')'){
                i++;
                continue;
            }
            if(s[i] == '('){
                open++;
            }
            if(s[i] == ')'){
                close++;
                if(open < close){
                    ans++,close--;
                }
            }
        }
printf("%d\n", ans);
}
return 0;
}
