#include<stdio.h>
int main()
{

    int a,b,i=2,c=0;
    int mas[16] = {
        2,
        3,
        5,
        7,
        11,
        13,
        17,
        19,
        23,
        29,
        31,
        37,
        41,
        43,
        47
};
    scanf("%d %d", &a, &b);
     for (int i = 0; i < 15; i++) {
        if (a == mas[i] && b == mas[i + 1]) {
            c++;
            break;
        }
    }

    if(c==0)
    {

        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;

}
