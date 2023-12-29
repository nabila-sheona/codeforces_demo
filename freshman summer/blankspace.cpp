#include<bits/stdc++.h>
using namespace std;

int main(){
    int taylor;

    cin>> taylor;
    while(taylor--){
    int n;
    cin >> n;
    int ts[n];
    int cnt=0, space=0;

    for(int i=0;i<n;i++){

        cin>> ts[i];

        if(ts[i]==0){

            cnt++;
        }

        else{


            space=max(space,cnt);
            cnt=0;
        }

    }

    cout<<max(space,cnt)<<endl;
    }



}


