#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    for(ll i=1;i<=(2*n-1);i++){
        for(ll j=1;j<=n;j++){
            if(abs(i-j)==n-1 and i>=n){
                cout<<"<";
            }else if(i+j==n+1 and i<=n){
                cout<<"<";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
}
