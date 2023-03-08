#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define sort v.begin(),v.end();
#define Rev_sor v.end(),v.begin();

int main(){
    int price, coin;    cin>>price>>coin;
    int count =0, sum = 0;
    while(1){
        sum+=price;
        count++;
        if( sum % 10 == 0 ||sum % 10 == coin){
            break;
        }
    }
    cout<<count<<endl;

 return 0;
}