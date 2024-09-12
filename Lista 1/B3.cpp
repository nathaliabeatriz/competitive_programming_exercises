#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        
        n -= 2;
        m -= 2;
        
        int resN = n%3;
        n = n/3;
        if(resN != 0){
            n++;
        }

        int resM = m%3;
        m = m/3;
        if(resM != 0){
            m++;
        }

        cout << n*m << "\n";
    }
}