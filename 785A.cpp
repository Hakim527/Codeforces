#include<bits/stdc++.h>
using namespace std;
int main(){
    int count = 0,n,i;
    cin>> n;
    string arr[n];
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    for(i=0; i<n; i++){
        if(arr[i] == "Tetrahedron"){
            count+=4;
        }else if(arr[i] == "Cube"){
            count+=6;
        }else if(arr[i] == "Octahedron"){
            count+=8;
        }else if(arr[i] == "Dodecahedron"){
            count+=12;
        }else if(arr[i] == "Icosahedron"){
            count+=20;
        }
    }
    cout << count <<endl;
 return 0;
}