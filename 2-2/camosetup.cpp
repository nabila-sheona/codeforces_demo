#include<iostream>
using namespace std;

int main()
{

    long long int n;

    cin>>n;
    while(n--)
    {
        long long int a,b,c,count=0,leftover1=0,leftover2=0;
        cin>>a>>b>>c;



        for(int i=0; i<a; i++)
        {


            count++;
        }

         if(b%3==1){
            if(c>=2){
                b=b+2;
                c=c-2;
            }
         }

         if(b%3==2 && c>0){

                b++;
                c--;

         }



        count+=(b/3);
        count+=(c/3);
        leftover1=b%3;

        if(leftover1>0)
        {

            count=-1;


        }

        else{

            if(c%3>0)


            count++;

        }


            cout<<count<<endl;


    }


}
