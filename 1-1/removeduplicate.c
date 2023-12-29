#include<stdio.h>
int main(){
    int n,a[1000];
    scanf("%d", &n);

    for(int i=0;i<n;i++){

    scanf("%d", &a[i]);
    }


    int c=0,b[10000]={0};


    for(int i=0;i<n;i++){

      for(int j=0;j<10;j++){
          if(a[i]==j){

            b[j]++;
          }

    }
    }

     for(int i=0;i<10;i++){
       if(b[i]>0){

        c++;
       }

    }

    printf("%d\n", c);
    int d[1000],e[1000];
    for(int i=n;i>0;i--){
      a[i]==d[a[i]];
      e[i]++;

      if(e[i]<2){

        printf("%d ", a[i]);
       }

    }

    return 0;

}
