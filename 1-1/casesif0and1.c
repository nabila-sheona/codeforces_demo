#include<stdio.h>
#include<string.h>
int main(){

    double a=0,b=0,i,n;
    wchar_t c[10000];
    scanf("%lf", &n);

    scanf("%ls", c);

    for(i=0;i<n;i++){

    if(c[i]=='0'){
    a++;
    }

    if(c[i]=='1'){
    b++;
    }
    }

    if(a>b){
    printf("%lf", a-b);
    }

    else{
    printf("%lf", b-a);
    }

    return 0;

}
