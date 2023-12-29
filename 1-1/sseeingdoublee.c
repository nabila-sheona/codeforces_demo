#include <stdio.h>
#include <string.h>
int main()
{
    int f,e=0;
    char str[40],d;

    scanf ("%s", str);

for(int i=0;i<strlen(str);i++){

    if(str[i]==strrev(str)[i]){

       f=1;
    }

    else{
            e++;

       f=0;

}
}

 if(e<=1){
    printf("YES");
    }

    else{
    printf("NO");
    }
    return 0;
}
