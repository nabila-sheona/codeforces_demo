#include<stdio.h>
#include<math.h>
int main(){

    int x,y,d,t;
    scanf("%d", &t);
    while(t--){
    scanf("%d %d", &x, &y);
    d=(x*x)+(y*y);
    if(d==0){
    printf("0\n");
    continue;

    }

    int s=sqrt(d);
    if(s*s==d){
    printf("1\n");

    }


    else{
    printf("2\n");

    }
    }
    return 0;

}
