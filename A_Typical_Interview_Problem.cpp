#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"


int main(){
    int test;   cin>>test;
    while(test--){
    string FB_string="FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
    int k;  cin >> k;  
    string s; cin>>s;
    size_t found = FB_string.find(s);
    if (found != string::npos) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}