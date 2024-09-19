#include <bits/stdc++.h>
using namespace std;

int main(){
    int v[3];
    for(int i=0; i<3; i++){
        cin >> v[i];
    }

    sort(v, v+3);

    if(v[1] - v[0] == v[2] - v[1]){
        cout << v[2] + (v[2] - v[1]);
    }
    else{
        cout << (v[0] + v[2]) - v[1] << "\n";
    }
    
}