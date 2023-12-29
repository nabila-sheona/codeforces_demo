#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        long long int a[n],b[m],c=0,d=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            c+=a[i];

        }
          for(int i=0;i<m;i++){
            cin>>b[i];
            d+=b[i];

        }
        if(c>d){

            cout<<"Tsondu"<<endl;
        }
        else if(d>c){

            cout<<"Tenzing"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }

}
