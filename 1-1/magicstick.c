 #include<stdio.h>

int main()
{


    int c;
    scanf("%d", &c);

    while (c--)
    {

        long long int x, y;
        scanf("%lld %lld", &x, &y);

            if(x>3){
                printf("YES\n");

            }

            else if(x==1){

                    if(x==1 && y==1){
                printf("YES\n");

            }
            else{

                printf("NO\n");
            }
                }


        else{
             if(y<=3){
                printf("YES\n");

            }
            else{

                printf("NO\n");
            }


        }


    }
    return 0;
}
