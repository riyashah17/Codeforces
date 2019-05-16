#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x,y,count=0;
    string s;
    cin>>n>>x>>y;
    cin>>s;
    for(int i = n-1; i>n-1-x; i--){
        if(i==n-y-1){
            if(s[i]=='0'){
                count++;
            }
        }
        else{
            if(s[i]=='1'){
                count++;
            }
        }
    }
    cout<<count<<endl;
}

