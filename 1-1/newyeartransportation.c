#include<stdio.h>
#include<string.h>
int main(){

int a[100000];


  int n, t;
  scanf("%d %d\n", &n, &t);
  int c[n];
    int p = 0;

    for(int i = 0; i <n-1; i++){

            scanf("%d", &c[i]);
    }

    while(p < t - 1) {
            p += c[p];
    }
     if(p == t - 1){

            printf("YES\n");
     }
    else{
            printf("NO\n");
    }
  return 0;
}
