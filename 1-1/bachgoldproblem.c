
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    if(n % 2 != 0) {
        n /= 2;
        n--;

        printf("%d\n", n+1);
         for(int i = 0; i < n; i++)
     {
         printf("2 ");
     }
     printf("3");

    }

     else {
        n /= 2;
         printf("%d\n", n);
          for(int i = 0; i < n; i++)
     {
         printf("2 ");
     }


    }


}
