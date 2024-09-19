#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, h;
    cin >> a >> b >> h;

    int res = ceil((double)(h-a)/(a-b));

    if(a >= h) cout << 1 << "\n";
    else cout << res+1 << "\n";
    return 0;
}