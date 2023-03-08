#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"

void Solution();

int main(){
    int test; 
    cin>>test;
    while(test--){
        Solution();
    }
    return 0;
}

void Solution() {
    string str1,str2;   cin>>str1>>str2;
    int n=str1.size();
    int m=str2.size();

    if(n==1 and m==1){
        if(str1==str2){
            cout<<"YES\n";
            cout<<str1<<endl;
            return;
        }
        cout<<"NO\n";
        return;
    }

    if(str1[0]==str2[0] || str1[n-1]==str2[m-1]){
        cout<<"YES\n";
        if(str1[0]==str2[0]) cout<<str1[0]<<"*\n";
        else cout<<"*"<<str1[n-1]<<endl;
        return;
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(str1[i]==str2[j]){
                if(i<n-1 and j<m-1){
                    if(str1[i+1]==str2[j+1]){
                        cout<<"YES"<<endl;
                        cout<<"*"<<str1[i]<<str1[i+1]<<"*\n";
                        return;
                    }
                }
            }
        }
    }
    cout<<"NO\n";
    
}