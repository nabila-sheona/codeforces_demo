#include<stdio.h>
int main(){

    int t;
    scanf("%d", &t);
    while(t--){
    int n,m=0,k[1000],p=0;
    scanf("%d", &n);

    for(int i=0;i<n;i++){

    scanf("%d", &k[i]);
    }

     for(int i=0;i<n;i++){

    if(m==k[i]){
    printf("YES\n");

    for(int i=0; i<n;i++){
    printf("%d ", k[i]);
    }
printf("\n");
    p=1;
   goto l;
    }


    else{
             m=m+k[i];
            p=0;
        continue;
    }

     }


          printf("NO\n");

 l: p=0;

    }
    return 0;

}
