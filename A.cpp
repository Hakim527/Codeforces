#include<bits/stdc++.h>
#define ll long long int
#define mod 10
#define pb push_back
#define pf push_front
#define __gcd
using namespace std;
int i,j,k;
void prime();
int main(){
  prime();





 return 0;
}

void prime(){
  ll front,end; cin>>front>>end;
  ll n = end-front;
  bool ar[n+1];
  memset(ar,0,sizeof(ar));
  ll value;
  if(front == 1) value = 2;
  else value =(end+1+1) - sizeof(ar);
  for(i=0; i*i<n; i++){
    value =(end+1+i) - n;
    if(ar[i] == 0){
      for(j=value*value; j<n; j+=value){
        ar[j] = 1;
      }
    }
  }
  for(i=0; i<sizeof(ar); i++){
    cout<<ar[i]<<" ";
  }
  

}
    