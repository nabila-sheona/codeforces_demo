#include<string.h>
int main(){
    long long int a,b,c,d,x,t;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld %lld %lld", &a, &b, &d);

        for(x=0; ;x++){
            if(a%d==0 || x%d==0){
                if(b%d==0 || x%d==0){

                    printf("%d\n", x);
                    break;
                }

            }

            else{

                printf("-1");
            }


        }



    }



}
