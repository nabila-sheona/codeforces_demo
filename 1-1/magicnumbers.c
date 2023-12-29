#include<stdio.h>
int main()
{

    int a,b;
    char f[100000];
    scanf("%s", f);
    int l=strlen(f);
    a=0;

//
//    for(int i=0;i<l;)
//        {
//            if(f[i]=='1' && f[i+1]=='4'  && f[i+2]=='4')
//            {
//                i+=3;
//            }
//
//            else if(f[i]=='1' && f[i+1]=='4')
//            {
//                i+=2;
//            }
//
//            else if(f[i]=='1')
//            {
//                i++;
//            }
//
//            else
//            {
//                a=0;
//                break;
//            }
//        }


    for(int i=0; i<l; i++)
    {


        if(f[i]=='1' || f[i]=='4')
        {

            a=1;

        }
        else
        {
            a=0;
            break;
        }

           if(f[i]=='4'){

                     if(f[i-1]=='4'){

                            if(f[i-2]=='4'){
            a=0;
            break;
                            }
        }
                }
    }


    if(f[0]!='1'){
            a=0;
        }


    if(a==0)
    {
        printf("NO\n");
    }

    else
    {
        printf("YES\n");
    }
    return 0;
}
