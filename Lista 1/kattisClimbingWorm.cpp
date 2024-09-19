#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, h;
    cin >> a >> b >> h;

    if(b >= h) cout << 1 << "\n";
    else cout << ceil((double)(h-b)/(a-b)) << "\n";
    return 0;
}