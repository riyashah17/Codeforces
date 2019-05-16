#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>n>>m;
    if(m == 0){
        cout<<"1"<<"\n";
        return 0;
    }
    if(n/m >= 2){
        cout<<m<<"\n";
    }
    else{
        cout<<n-m<<"\n";
    }
}
