#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	ll l=1,r=2*n-1;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=2*n-1;j++){
			if(j>=l and j<=r){
				cout<<"@";
			}else{
				cout<<":";
			}
		}cout<<endl;
		l++;
		r--;
	}
}
