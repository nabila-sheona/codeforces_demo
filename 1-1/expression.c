#include<stdio.h>
int main(){

    int a,b,c,ans;

    scanf("%d %d %d", &a, &b, &c);
    ans=a+b+c;

    if(ans>(a + b) * c){
    ans=ans;
    }
    else{
    ans=(a + b) * c;
    }


    if(ans>a * (b + c)){
    ans=ans;
    }
    else{
    ans=a * (b + c);
    }



    if(ans>a * b * c){
    ans=ans;
    }
    else{
    ans=a * b * c;
    }
printf("%d", ans);

return 0;

}
