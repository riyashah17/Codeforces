#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n<11){
            cout<<"NO"<<endl;
        }
        else if(n==11 && s[0]!='8'){
            cout<<"NO"<<endl;
        }
        else{
            while(s[0]!='8' && s.length()>11){
                s.erase(s.begin());
            }
            
            if(s[0]!='8'){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        
    }
}
