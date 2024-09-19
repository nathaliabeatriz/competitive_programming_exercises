#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, qtd = 0;
    cin >> n;
    double total = 0;
    for(int i=0; i<n; i++){
        int aux;
        cin >> aux;
        if(aux != -1){
            total += aux;
            qtd++;
        }
    }
    printf("%.17lf\n", total/qtd);
}