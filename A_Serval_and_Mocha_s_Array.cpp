#include<bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main(){
    int t;    cin>>t;
    while(t--){
        int n;   cin>>n;
        vector<int> v(n);
        bool ok = false;
        for(int i=0; i<n; i++) cin>>v[i];

        for(int i=0; i<n; i++ ){
            for(int j=i+1; j<n; j++){
                if(gcd(v[i],v[j]) <= 2){
                    ok = true;
                    break;
                }
            }
        }
        if(ok) cout<<"Yes\n";
        else cout<<"No\n";

    }
   
 return 0;
}