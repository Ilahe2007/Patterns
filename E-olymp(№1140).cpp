#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    for(ll i=1;i<=(2*n-1);i++){
        for(ll j=1;j<=n;j++){
            if(i<=n and i==j){
                cout<<">";
            }else if(i>n and (j+(i-n+1)==n+1)){
                cout<<">";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
}
