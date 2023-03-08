#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
    long int S[4];
        for(int i=0; i<4; i++){
            scanf("%d",&S[i]);
        }
    sort(S,S+4);
    int Count = 0;
    for(int i=0; i<4; i++){
        if(S[i] == S[i+1]){
            Count++;
        }
    }
    printf("%d\n",Count);
 return 0;
}