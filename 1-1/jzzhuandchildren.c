#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){

    int n,m,max=-100000,l=1;

    scanf("%d %d", &n, &m);
    int arr[n];
    for(int i=0;i<n;i++){

    scanf("%d", &arr[i]);

    int a=ceil((float)arr[i]/m);
    if(a>=max){

    max=a;

    l=i+1;
    }
    }
    printf("%d\n", l);
    return 0;
}
