#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int a, c;
    while(cin >> a >> c){
        if(a == 0 && c == 0) return 0;
        int v[c+1];
        for(int i=0; i<c; i++){
            cin >> v[i];
        }

        int total = 0;
        total += a - v[0];
        for(int i=1; i<c; i++){
            if(v[i] < v[i-1]){
                total += v[i-1] - v[i];
            }
        }

        cout << total << "\n";
    }

}