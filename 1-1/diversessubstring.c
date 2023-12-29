#include <stdio.h>
#include<math.h>


int main() {
int x,l,n,p,b=0,t,a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
    char c[100000];
    scanf("%d", &t);
    while(t--)
    {
       scanf("%d", &n);
        scanf("%s", c);

        for(int i=0; i<l; i++)
        {

            if(c[i]=='0')
            {
                a0++;
            }

            if(c[i]=='1')
            {
                a1++;
            }
            if(c[i]=='2')
            {
                a2++;
            }
            if(c[i]=='3')
            {
                a3++;
            }
            if(c[i]=='4')
            {
                a4++;
            }
            if(c[i]=='5')
            {
                a5++;
            }
            if(c[i]=='6')
            {
                a6++;
            }
            if(c[i]=='7')
            {
                a7++;
            }
            if(c[i]=='8')
            {
                a8++;
            }
            if(c[i]=='9')
            {
                a9++;
            }


        }

        if(a0>a1 && a0>a2 && a0>a3 && a0>a4 && a0>a5 && a0>a6 && a0>a7 && a0>a8 && a0>a9){

            p=a0;
        }

        else if(a1>a2 && a1>a3 && a1>a4 && a1>a5 && a1>a6 && a1>a7 && a1>a8 && a1>a9){

            p=a1;
        }

        else if(a2>a3 && a2>a4 && a2>a5 && a2>a6 && a2>a7 && a2>a8 && a2>a9){

            p=a2;
        }
         else if(a3>a4 && a3>a5 && a3>a6 && a3>a7 && a3>a8 && a3>a9){

            p=a3;
        }

         else if( a4>a5 && a4>a6 && a4>a7 && a4>a8 && a4>a9){

            p=a4;
        }

         else if(a5>a6 && a5>a7 && a5>a8 && a5>a9){

            p=a5;
        }

        else if(a6>a7 && a6>a8 && a6>a9){

            p=a6;
        }
        else if(a7>a8 && a7>a9){

            p=a7;
        }
        else if(a8>a9){

            p=a8;
        }

        else{
            p=a9;
        }

       int  q=(p*n);


        x=pow(2,n)-1;
        int y=x-q;
        printf("%d\n", y);


    }

return 0;
}
