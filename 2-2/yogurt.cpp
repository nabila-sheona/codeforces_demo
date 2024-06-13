#include<bits/stdc++.h>
using namespace std;

int main(){


int t;
cin>>t;

while(t--){

    long long n,a,b;
    cin>>n>>a>>b;

    long long min=0;

    long long temp1=n*a;
    long long temp2=(n/2)*b;
    if(n%2==1){
    temp2+=a;
    }


    if(temp1<temp2){min=temp1;}
    else{min=temp2;}

    cout<<min<<endl;
}


}
