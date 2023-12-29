#include<stdio.h>
int main() {


   long long int q;
    scanf("%lld", &q);

    while (q--) {
       long long int a, b;
        scanf("%lld %lld", &a, &b);
        if (b == 1) {
            printf("NO\n");
        } else {
           printf("YES\n");
           printf("%lld %lld %lld\n", a, a*b, a*(b+1));

        }
    }
    return 0;
}
