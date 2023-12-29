#include<stdio.h>
#include<string.h>




int main(){


    int i,n,j,t,x,y;
    char s[10000];
    scanf("%d %d", &n, &t);

    scanf("%s", s);

while (t--)
    {
        for (int i = 1; i < n; ++i)
        {
            if (s[i] == 'G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                ++i;
            }
        }
    }
    printf("%s", s);
    return 0;




}
