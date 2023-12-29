#include<stdio.h>
int main(){

    int t;
    scanf("%d", &t);
    while(t--){
    int n, m=0;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d", &a[i]);

    if(a[i]==1){
    m++;
    }

    }

    int ans=n+m/2;

    if(m%2!=0){
    ans++;
    }

    printf("%d\n", ans);
    }
    return 0;

}
