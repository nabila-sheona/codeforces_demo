#include<stdio.h>
int main()
{
   int i,t,s;
   scanf("%d", &t);
   for(i=0;i<t;i++){
   scanf("%d", &s);
   string result;
        for (int d = 9; d >= 1; d--)
            if (s >= d) {
                result = char('0' + d) + result;
                s -= d;
            }
   }
    printf("%d", result);
    return 0;
}
