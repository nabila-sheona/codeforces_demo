#include<iostream>
#include<cmath>
using namespace std;
int main(){
  long long int t;

  cin>>t;
  while(t--){

    long long int n;

    cin>>n;
    long long int a[n], sum=0;
    double root;

    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];

    }

    root=sqrt(sum);
  long long  int rroot=sqrt(sum);

    if(root==rroot){

    cout<<"YES"<<endl;
  }

  else{

    cout<<"NO"<<endl;
  }
  }


}
