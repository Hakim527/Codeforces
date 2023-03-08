#include<bits/stdc++.h>
#define ll long long int
#define mod 10
#define pb push_back
#define pf push_front
#define __gcd
using namespace std;
int i,j,k;

int main(){
    int x1,x2,x3;   cin>>x1>>x2>>x3;
    int mid,Result;
    if(x1>x2 && x1<x3 || x1<x2 && x1>x3){
        Result = abs(x1-x2) + abs(x1-x3);
    }else if(x2>x1 && x2<x3 || x2<x1 && x2>x3){
        Result = abs(x2-x1) + abs(x2-x3);
    }else{
        Result = abs(x3-x1) + abs(x3-x2);
    }

    cout<<Result<<endl;


 return 0;
}