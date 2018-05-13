#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack <int> stk;
    stk.push(arr[n-1]);
    //cout<<stk.top()<<endl;
    for(int i=n-2;i>=0;i--){
        int flag=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            stk.push(arr[i]);
        }
    }
    
    cout<<stk.size()<<"\n";
    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }
    
    cout<<"\n";
}
