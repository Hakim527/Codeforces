#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define sort v.begin(),v.end();
#define Rev_sor v.end(),v.begin();
void answer();

int main(){
    int t;      cin>>t;
    while(t--) answer();
 return 0;
}

void answer()
{
    int w,d,h;      cin>>w>>d>>h;
    int a,b,f,g;    cin>>a>>b>>f>>g;
    int Result = min(b+g,2*d-b-g)+abs(a-f);
    Result = min(Result,min(a+f,2*w-a-f)+abs(b-g));
    cout<<Result+h;
    puts("");
}