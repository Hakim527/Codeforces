#include<bits/stdc++.h>
#define ll long long int
#define mod 10
#define pb push_back
#define pf push_front
#define __gcd
using namespace std;
ll i,j,k;

int main(){
    ll n,k;    cin>>n>>k;
    set<ll>Divisor;
    set<ll>:: iterator it;
    for(i=1; i*i<=n; i++){
        if(n%i == 0){
            Divisor.insert(i);
            Divisor.insert(n/i);
        }
    }
    if(Divisor.size() >= k){
        it = Divisor.begin();
        advance(it,k-1);
        cout<<*it<<endl;
    }else{
        cout<<-1<<endl;
    }
 return 0;
}