#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin>>t;
    while (t--){
        int x,y;    cin>>x,y;
        float a = sqrt(x*x + y*y);
        int b = a;
        if(a-b > 0.00000) cout<<"1"<<endl;
        else cout<<"2"<<endl;         
    }
    
 return 0;
}