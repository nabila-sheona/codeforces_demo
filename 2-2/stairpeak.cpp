#include<iostream>
using namespace std;

int main(){
long long t;
cin>>t;

while(t--){
long long a, b,c;

cin>>a>>b>>c;
 if(a<b && b>c){

cout<<"PEAK"<<endl;

}
else if(a<b && b<c){

cout<<"STAIR"<<endl;

}



else{
cout<<"NONE"<<endl;
}

}
}
