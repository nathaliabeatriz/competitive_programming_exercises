#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int v[n];
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int comp = v[0];
        for(int i=0; i<n; i++){
            if(v[i] != comp){
                cout << i+1 << "\n";
                break;
            }
            comp++;
        }
    }
}