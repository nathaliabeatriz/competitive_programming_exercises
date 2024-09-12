#include<bits/stdc++.h>
using namespace std;


int main(){
    int x, y;
    cin >> x >> y;
    if(x == 0 && y==1){
        cout << "ALL GOOD\n";
    } 
    else if(y==1) cout << "IMPOSSIBLE\n";
    else{
        printf("%.6lf\n", (double)-x/(y-1));
    }

    return 0;
}