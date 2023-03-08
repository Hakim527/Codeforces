#include<bits/stdc++.h>
using namespace std;
int main(){
    int count = 0;
    string Set;
    getline(cin, Set);
    sort(Set.begin(),Set.end());

    for(int i=0; i<Set.size(); i++){
        if(Set[i] >= 'a' && Set[i] <= 'z'){
            if(Set[i] != Set[i+1]){
                count++;
            }
        }
    }
    cout<< count << endl;

 return 0;
}