#include<stdio.h>
#include<math.h>
int main(){

    long long int n;
    scanf("%lld", &n);
    long long int a[n];
    for(int i=0; i<n;i++){

    scanf("%lld", &a[i]);
    }

    if(n==1){
     for(int i=0; i<log10(a[0])+1;i++){

    printf("%d\n", a[0]);
    }
    }
    else{
    long long int max=a[0];

   for (int i = 0; i < n; ++i) {
    if (max < a[i]) {
      max= a[i];
    }
  }

    long long int m=log10(max)+1;

    for(int i=0;i<m;i++){



    }

}
}
