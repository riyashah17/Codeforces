#include<bits/stdc++.h>
using namespace std;

/*

int fac(int x){
    if(x==0)
        return 1;
    
    return fac(x-1)*x;
}

int com(int x){
    if(x<2){
        return 0;
    }
    return (fac(x)/(fac(x-2)*fac(2)));    
}
*/

int main(){
    int n;
    cin>>n;
    string s;
    vector <string> v;
    vector <char> a;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    
    for(int i=0;i<v.size();i++){
        a.push_back(v[i][0]);
    }
    
    map <char,int> m;
    
    for(int i=0;i<a.size();i++){
        m[a[i]]++;
    }
    
    
    int sum = 0;
    int firsthalf;
    int sechalf;
    int x;
    for(auto it = m.begin();it!=m.end(); it++){
        if(it->second >2){
            x = it->second;
            firsthalf = x/2;
            sechalf = x - firsthalf;
            //int res1 = com(firsthalf);
            //int res2 = com(sechalf);
            sum = sum + (firsthalf*(firsthalf-1))/2 + (sechalf*(sechalf-1))/2;
        }
    }
    
    
    //for(int i=0;i<a.size();i++){
    //    cout<<a[i]<<" ";
    //}
    
    cout<<sum<<"\n";
    
}
