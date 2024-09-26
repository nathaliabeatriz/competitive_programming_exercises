#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char s;
    cin >> n >> s;
    map <char, pair<int, int>> m;
    m['A'] = {11, 11}, m['K'] = {4, 4}, m['Q'] = {3, 3}, m['J'] = {20, 2}, m['T'] = {10, 10}, m['9'] = {14, 0}, m['8'] = {0, 0}, m['7'] = {0, 0};

    int total = 0;
    for(int i=0; i<n*4; i++){
        string carta;
        cin >> carta;
        if(carta[1] == s){
            total += m[carta[0]].first;
        } else total += m[carta[0]].second;
    }

    cout << total << "\n";
}