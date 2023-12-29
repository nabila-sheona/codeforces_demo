#include<stdio.h>
int main(){
    int n,a[1000];
    scanf("%d", &n);

    for(int i=0;i<n;i++){

    scanf("%d", &a[i]);
    }


    int c=0,b[10000]={0};


    for(int i=0;i<n;i++){

      for(int j=0;j<100;j++){
          if(a[i]==j){

            b[j]++;
          }

    }
    }

     for(int i=0;i<100;i++){
       if(b[i]>0){

        c++;
       }

    }

    printf("%d\n", c);
//    //for(int i=0;i<10;i++){
//      // if(b[i]>0){
//
//        printf("%d ", i);
//       }

int d[1000]={0},e=0;


 for(int i=0;i<n;i++){

      for(int j=1;j<n;j++){
          if(a[i]==a[j]){

           e++;
          }

    }

    if(e==0){

        printf("%d ", a[i]);
           d[i]=a[i];
    }
    }


    return 0;

}
