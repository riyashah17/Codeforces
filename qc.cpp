#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int dorm,letter,i,j=0;
    cin>>dorm>>letter;
    long long int room[dorm];
    for(i=0;i<dorm;i++){
        cin>>room[i];
        if(i>0)
            room[i]+=room[i-1];
    }
    
    for(i=0;i<letter;i++){
        long long int x;
        cin>>x;
        for(j;j<dorm;j++){
            if(room[j]>=x){
                if(j>0){
                    cout<<j+1<<" "<<x-room[j-1]<<"\n";
                    break;
                }
                else{
                    cout<<j+1<<" "<<x<<"\n";
                    break;
                }
            }
        }
    }
}
