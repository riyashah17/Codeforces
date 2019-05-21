#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h,m;
    cin>>n>>h>>m;
    int l,r,x;
    //vector <int> res;
    map <int,int> mp;
    for(int i=1;i<=n;i++){
        mp[i] = INT_MAX;
    }
    for(int i=0;i<m;i++){
        cin>>l>>r>>x;
        for(int j=l;j<=r;j++){
            if(mp[j]>x){
                mp[j] = x;
            }
        }
    }
    
    int result = 0;
    for(int i=1;i<=n;i++){
        if(mp[i]==INT_MAX){
            mp[i] = h;
        }
        
        result += mp[i]*mp[i];
    }
    
    //for(int i=1;i<=n;i++){
    //    cout<<mp[i]<<endl;
    //}
    cout<<result<<"\n";
    
}
