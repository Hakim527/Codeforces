//Arrival of the General
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ar[150],i;
    cin>>n;
    int Ma=0,Max, Mi=INT_MAX,Min;
    for(i=0; i<n; i++){
        cin>>ar[i];

         if(ar[i]> Ma){
            Ma = ar[i];
            Max = i;
        }

        if(ar[i]<=Mi){
            Mi = ar[i];
            Min = i;
        }
    }
    if(Max > Min) Min++;

    int Result = (Max + (n-1)) - Min;
    cout<< Result <<endl;


 return 0;
}