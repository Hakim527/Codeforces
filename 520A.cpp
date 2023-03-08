#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count = 0;
    string Word;
    cin>>n >>Word;

    for(int i=0; i<n; i++){
        Word[i] = tolower(Word[i]);
    }
    sort(Word.begin(),Word.end());

    for(int i=0; i<n; i++){
        if(Word[i] != Word[i+1]){
            count++;
        }
    }

    if(count == 26){
        cout<< "YES\n";
    }else{
        cout<< "NO\n";
    }
 return 0;
}