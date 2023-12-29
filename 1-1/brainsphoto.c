#include<stdio.h>
#include<string.h>
int main(){

int a,b,n,t,f,color=0;
char c[10000];
scanf("%d %d", &a, &b);
for(int i=0;i<a;i++){
     for(int j=0;j<b;j++){

     scanf("%s", c);
      if (c[j] == 'C' || c[j] == 'M' || c[j] == 'Y') {
                color = 1;
                continue;
      }

     }
      if (color == 1) {
           continue;
        }
    }

 if (color == 1) {
        printf("#Color");
    } else {

        printf("#Black&White");
    }
    return 0;
}
