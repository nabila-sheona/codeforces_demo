#include<stdio.h>
int main(){


    int t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++){
   int m=i*(i+1);
    if(m/2==t){
    printf("YES");
    return 0;
    }

    }

     printf("NO");
     return 0;

}
