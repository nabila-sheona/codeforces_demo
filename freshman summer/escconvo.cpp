#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long int n,m,k,H,x=0;
        cin>>n>>m>>k>>H;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            long long int r=abs(H-a[i]);
            if(r!=0 && r%k==0 && r/k <=m-1) {x++;}
        }





        cout<<x<<endl;


    }


}

