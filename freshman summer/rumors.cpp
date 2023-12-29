#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<long long int> c(N);
bool visited[N]={false};

int main(){
long long int n,m;
cin>>n>>m;



for(long long int i=1;i<=n;i++){

    cin>>c[i];
}
long long int a,b, s=0,d=0;
for(long long int i=1;i<=m;i++){
    cin>>a>>b;

    if(visited[a]!=true && visited[b]!=true){


    s+=min(c[a], c[b]);
    c[a]=min(c[a], c[b]);
    c[b]=min(c[a], c[b]);
      visited[a]=true;
      visited[b]=true;

     }
else if(visited[b]!=true){

      visited[b]=true;
      s-=c[a];
      s+=min(c[a],c[b]);
        c[a]=min(c[a], c[b]);
    c[b]=min(c[a], c[b]);

        }
        else if(visited[a]!=true){

      visited[a]=true;
   s-=c[b];
      s+=min(c[a],c[b]);
        c[a]=min(c[a], c[b]);
    c[b]=min(c[a], c[b]);
        }

}


for(long long int i=1;i<=n;i++){
if(visited[i]!=true)
   {

   s+=c[i];

   }
}

cout<<s<<endl;

}
