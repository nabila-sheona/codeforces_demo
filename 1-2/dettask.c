#include<stdio.h>
#include<string.h>
int main(){

    int t;

    scanf("%d", &t);

    while(t--){
           int suspect=0;
        char fr[1000000];

        scanf("%s", fr);
            for(int i=0; i<strlen(fr); i++){

                if(fr[i]=='1'){

                suspect=1;
                }

                else if(fr[i]=='?'){

                suspect++;
                }

                else if(fr[i]=='0'){

                suspect++;
                break;

                }




    }

        printf("%d\n", suspect);
    }
        return 0;



}
