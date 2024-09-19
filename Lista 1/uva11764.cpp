#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cont=1;
    while(n--){
        int n2;
        cin >> n2;
        int vet[n2];
        for(int i=0; i<n2; i++){
            cin >> vet[i];            
        }
        int low=0, high=0;
        for(int i=0; i<n2-1; i++){
            if(vet[i]>vet[i+1]){
                low++;
            } else if(vet[i]<vet[i+1]){
                high++;
            }   
        }
        cout << "Case " << cont << ": " << high << " " << low << "\n";
        cont++;
    }
}