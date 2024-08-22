#include<bits/stdc++.h>
#define ll long long
using namespace std;


void stabilizer(vector<vector<ll>>& matrix, ll n, ll m){


    while (true)
    {
        bool found=false;

        ll max_i=-1, max_j=-1;

        ll max_value=-1;
    

     for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                bool is_greater = true;
                if (i > 0 && matrix[i][j] <= matrix[i - 1][j]) is_greater = false;
                if (i < n - 1 && matrix[i][j] <= matrix[i + 1][j]) is_greater = false;
                if (j > 0 && matrix[i][j] <= matrix[i][j - 1]) is_greater = false;
                if (j < m - 1 && matrix[i][j] <= matrix[i][j + 1]) is_greater = false;
                
                if (is_greater) {
                    if (matrix[i][j] > max_value || (matrix[i][j] == max_value && (i < max_i || (i == max_i && j < max_j)))) {
                        max_value = matrix[i][j];
                        max_i = i;
                        max_j = j;
                        found = true;
                    }
                }
            }
        }

        if(!found) break;

        matrix[max_i][max_j]--;
    }
    




}

int main(){

    long long t;

    cin>>t;

    while(t--){

     ll m,n;

        cin>>n>>m;



        vector<vector<ll>> matrix(n,vector<ll>(m));


        for(ll i=0;i<n;i++){

            for(ll j=0; j<m;j++){

                  cin >> matrix[i][j];
            }


        }

        stabilizer(matrix,n,m);

         for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }


        





    }
return 0;



}