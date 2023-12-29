#include <stdio.h>
#include <string.h>
int main()
{
    int f,e=0,i,j,c;
    char str[40],d;

    scanf ("%s", str);

    for(i=0, j=strlen(str)-1; i<j; i++, j--){
        c+=str[i]!=str[j];
    }

    if(c==1 || (c==0 && strlen(str)%2==1)){
        printf("YES");
    }
    else{
        printf("NO");
    }


    return 0;
}
