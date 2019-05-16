#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;

    while(n>=10){
        n++;
        while(n%10==0)
            n/=10;
        count++;
    }
    cout<<count+9;
}
