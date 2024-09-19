#include <bits/stdc++.h>
using namespace std;


int main(){
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    int i1 = 0, i2 = 0, mult = 100;
    for(int i=0; i<s1.size(); i++){
        i1 += (s1[i] - '0') * mult;
        i2 += (s2[i] - '0') * mult;
        mult = mult/10;
    }

    if(i1 >= i2) cout << i1 << "\n";
    else cout << i2 << "\n";

}