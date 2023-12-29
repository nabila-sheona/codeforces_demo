#include<stdio.h>
#include<string.h>
int main(){


    int t,n,a,b;
    char c[]="abcdefghijklmnopqrstuvwxyz";

    scanf("%d", &t);
    while(t--){
            char s[1000];
    scanf("%d %d %d", &n, &a, &b);

     for(int i=0; i<b; i++){
            s[i]=c[i];
        }
        int k=0;
        while(n--){
            printf("%s", s[k]);
            k++;
            if(k==b)
                k=0;
        }

        printf("\n");

    }

    return 0;

}
