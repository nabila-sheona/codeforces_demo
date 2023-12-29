#include<stdio.h>
int main()
{
    int a,b,m,n,d,e,ans=0;
    scanf("%d %d", &n, &m);

    for (int a= 0; a<=n ; a++) {
        for (int b= 0; b<=n ; b++) {
            if ( ((a * a) + b) == n && ((b * b) + a) == m) {
                ans++;
            }
        }
    }
    printf("%d", ans);
    return 0;

}
