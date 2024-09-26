#include <bits/stdc++.h>
using namespace std;
#define MAX 100010
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int a, b;

    while(cin >> a >> b){
        if(a == 0 && b == 0) return 0;
        int vA[a], vB[b], contA[MAX], contB[MAX];
        memset(contA, 0, sizeof(contA));
        memset(contB, 0, sizeof(contA));

        for(int i = 0; i<a; i++){
            cin >> vA[i];
            contA[vA[i]]++;
        }
        for(int i = 0; i<b; i++){
            cin >> vB[i];
            contB[vB[i]]++;
        }

        int trocas = 0;
        for(int i=0, j=0; i<a && j<b; i++){
            if(contB[vA[i]] == 0){
                while(j < b){
                    if(contA[vB[j]] == 0){
                        trocas++;
                        contA[vB[j]]++;
                        contB[vA[i]]++;
                        j++;
                        break;
                    }
                    j++;
                }
            }
            
        }
        cout << trocas << "\n";
    }
}