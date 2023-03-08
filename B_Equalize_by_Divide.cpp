#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool Chek(vector<ll> a){
    for(ll i=0; i<a.size()-1; i++){
        if(a[i] !=a [i+1]) return false;
    }
 return true;
}
void S();

int main(){
    ll t;   cin>>t;
    while(t--){
        S();
    }
 return 0;
}

void S(){
    ll n;   cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];

    if(Chek(a)){
        cout<<0 <<endl;
        return;
    }
    vector<vector<ll>> ans;
    vector<ll> prev = a;
    while(Chek(a) == false){
        ll min = INT_MAX;
        ll ind = -1;
        for(ll i=0; i<n; i++){
            if(a[i]<min){
                min = a[i];
                ind = i;
            }
        }

        bool ok = false;
        for(ll i =0; i<n; i++){
            if(a[i] != min and a[i]>min){
                ll y = (a[i] / min);
                if(a[i] % min != 0){
                    y++;
                }
                ans.push_back({i, ind});
                a[i] = y;
                ok = true;
            }
        }
        if(a == prev){
            cout<<-1<<endl;
            return;
        }
        prev = a;
    }
    cout <<ans.size()<<endl;
    for(auto it: ans){
        cout<<it[0] + 1 <<" "<<it[1]+1<<endl;
    }
}
