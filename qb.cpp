#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    stack <char> stk;
    int count=0,tot=0;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        stk.push(x);
        if(stk.top()=='x'){  
            count++;
            if(count==3){
                stk.pop();
                tot++;
                count--;
            }
        }
        if(stk.top()!='x')
            count=0;
            
    }
        cout<<tot<<"\n";
}
