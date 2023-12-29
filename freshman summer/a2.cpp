#include<bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin>>t;
    while(t--){


        int n,m,k;

        cin>>n>>m>>k;
         int x,y;
            cin>>x>>y;
        int d=0;
        for(int i=0;i<k;i++){
            int x2,y2;
            cin>>x2>>y2;

            if((x+y)%2==(x2+y2)%2){
                d=1;
            }



        }

        if(d==0){
            cout<<"YES"<<endl;

        }

        else{
            cout<<"NO"<<endl;
        }
    }


}


