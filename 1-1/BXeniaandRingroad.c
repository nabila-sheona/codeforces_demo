#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int l= 1;
    long long int ans = 0;
    for(int i=0; i<m; i++)
    {
        int p;
        scanf("%d", &p);

        if(p>= l)
            ans += p-l;
        else
            ans += n - (l-p);
        l = p;
    }
    printf("%I64d", ans);



    return 0;
}
