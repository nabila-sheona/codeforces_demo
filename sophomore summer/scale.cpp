#include<bits/stdc++.h>

using namespace std;

int main(){
   int t;

   cin>>t;

   long long cnt=0;

   while(t--){
    long long n,k;


    cin>>n>>k;

    vector<vector<char>> grid(n, vector<char>(n));

       for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> grid[i][j];
            }
        }
    for (int i = 0; i < n; i+=k) {
            for (int j = 0; j < n; j+=k) {
                cout<< grid[i][j];
            }

            cout<<'\n';
        }



}

}

