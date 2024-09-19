#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
       
        vector<int>v;
        int pos = 0;
        for(int i=0; i<n; i++){
            string s;
            cin >> s;
            
            if(s == "LEFT"){
                pos--;
                v.push_back(-1);
            }
            else if(s == "RIGHT"){
                pos++;
                v.push_back(1);
            }
            else{
                int j;
                cin >> s >> j;
                pos += v[j-1];
                v.push_back(v[j-1]);
            }
            
        }
        cout << pos << "\n";
    }
}