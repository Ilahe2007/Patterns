#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=(2*n-1);j++){
            if(i==j and j<=n){
                cout<<"@";
            }else if(i+j==2*n and j>=n){
                cout<<"@";
            }else if(i+(j-n+1)>=n+1 and j>n){
                cout<<"|";
            }else if(i>j and j<n){
                cout<<"|";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
}
