#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i=1;
    while(cin >> n){
        int vet[n];
        for(int i=0; i<n; i++){
            cin >> vet[i];
        }
        sort(vet, vet+n);
        cout << "Case " << i << ": " << vet[0] << " " << vet[n-1] << " " << vet[n-1] - vet[0] << "\n";
        i++;
    }
}