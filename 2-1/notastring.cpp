#include<iostream>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
string s;
cin>>s;
if(s=="()"){

cout<<"NO"<<endl;
continue;
}

cout<<"YES"<<endl;

string n="";
     for(int i=0;i<s.size();i++)
        {
            n+='(';
        }

        for(int i=0;i<s.size();i++)
        {
            n+=')';
        }


  string b = "";
        for (int i = 0; i < s.length(); i++)
        {
            b += "()";
        }
        if (n.find(s) != string::npos)
        {
            cout << b << endl;
        }
        else
        {
            cout << n << endl;
        }
}

}
