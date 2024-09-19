#include <bits/stdc++.h>
using namespace std;

int main(){
    double h, u, d, f;
    while(cin >> h >> u >> d >> f){
        if(h==0) return 0;
        int dia = 0;
        double hAtual = 0;
        f = u * f/100.0;

        while(true){
            dia++;
            if(u >= 0) hAtual += u;
            u -= f;
            if(hAtual > h){
                cout << "success on day " << dia << "\n";
                break;
            }
            hAtual -= d;
            if(hAtual < 0){
                cout << "failure on day " << dia << "\n";
                break;
            }
        }
    }
    return 0;
}