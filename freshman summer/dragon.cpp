#include<bits/stdc++.h>
using namespace std;
int main(){
long long int s,n,d=0;
cin>>s>>n;
pair<int,int>a[1000];
bool flag=1;
for(int i=0;i<n;i++){

    cin>>a[i].first>>a[i].second;
}

sort(a,a+n);
//sort(sm,sm+n);
for(int i=0;i<n;i++){

    if(s>a[i].first){
        s=s+a[i].second;
        flag=1;
    }
    else{
        flag=0;
        break;

    }
}


if(flag){

    cout<<"YES"<<endl;
}

else{

    cout<<"NO"<<endl;
}

}


