#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int val = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '-'){
            if(val!=0){
                val--;
            }
        }
        else if(s[i] == '+'){
            val++;
        }
    }
    
    cout<<val<<"\n";
    
}
