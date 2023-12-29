#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
       long long n;
        cin>>n;

      map<long long, long long> a,b;

        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
     long long s=0;

        for(int i=0;i<n;i++){
                 int m=b[i]-a[i];
            for(int j=i+1;j<n;j++){
                 int p=b[j]-a[j];


                if(a[i]==a[j]){
                    s++;
                }
                else if(b[i]==b[j]){
                    s++;
                }
                else{
                     if(m==p){
                    s++;
                }
                else if((a[i]+b[i])==(a[j]+b[j])){
                    s++;
                }

                }

            }

        }

     cout<<s*2<<endl;

    }


}
