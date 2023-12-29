#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d %d %d", &n, &m, &k);
    if(n<=k && n<=m){
    printf("YES");
    }
    else{
    printf("NO");
    }
    return 0;
}
