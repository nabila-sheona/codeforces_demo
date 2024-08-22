#include<iostream>
using namespace std;

int main()
{

    long long t;

    cin>>t;


    while(t--)
    {

        long long n,k;

        cin>>n>>k;
        long long t=0;
        while(n>0)
        {
            for(int i=0; i<k; i++)
            {
                if(i==0){n--;}

                t++;

                if(n==0)
                {
                    break;
                }
            }



        }
        cout<<t<<endl;



    }


}
