
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j,k,l;

int main(){
 ll t; cin>>t;
 while(t--){
    ll n,m; cin>>n>>m;
    vector<ll>vec(m);
    for(i=0; i<m; i++) cin>>vec[i];
    map<ll,ll>Map;
    for(i=1; i<=n; i++) Map[i]=-1;
    ll M=1;
    ll temp=n;
    for(i=0; i<m; i++){
        if(temp==0) break;
        if(Map.find(vec[i])==Map.end()){
            Map[vec[i]]=1;
            Map[temp]=M;
            temp--;
        }
     M++;
    }
    for(auto it: Map){
        if(it.first<=n) cout<<it.second<<" ";
    }

  cout<<endl;
 }
 return 0;
}
