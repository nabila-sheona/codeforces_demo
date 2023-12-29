#include<stdio.h>
int main(){

    int n,k,m=0,c=0;
    scanf("%d %d", &n, &k);
    long long int a[n+9];
    for(int i=0;i<n;i++){
        scanf("%lld", &a[i]);

    }

    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
      if(a[i]>a[j]){

    long long int t=a[i];
      a[i]=a[j];
      a[j]=t;
      }

      }
    }


    for(int i=0;i<n;i++){
      if(m<k) {
            m=m+a[i];
      c++;
      }
      else{

        break;
      }

    }

    printf("%lld", c);
    return 0;

}
