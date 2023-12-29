#include<stdio.h>
#include<string.h>


int main()
{

    long long int t,f;
    wchar_t a;
    scanf("%lld", &t);
    while(t--)
    {

        wchar_t s[10000];
        scanf("%ls", s);


        {

    int f=0;
//         if(strlen(s)==1){

//            if(s[0]=='Y' || s[0]='e' || s[0]=='s')
//            {
//                printf("YES\n");
//
//
//            }
//            else{
//
//                printf("NO\n")

//                return;
//            }
//         }



    for(int i=0; i<strlen(s); i++)
    {

         if(s[i]=='e' && s[i+1]=='s' && s[i]!=s[i+1] && s[i]!=s[i-1])
        {


              continue;


        }

        else if(s[i]=='s' || s[i+1]=='Y' && s[i]!=s[i+1] && s[i]!=s[i-1])
        {

              continue;




        }

         else if(s[i]=='Y' && s[i+1]=='e' && s[i]!=s[i+1] && s[i]!=s[i-1])
        {

            continue;



        }



        else
        {
            f=0;


            printf("NO\n");
goto p ;



        }

    }
int l=strlen(s);



 printf("YES\n");

p: if(f=0){
    break;
}

}

    }

    return 0;
}
