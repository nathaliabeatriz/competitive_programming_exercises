#include <bits/stdc++.h>
using namespace std;


int main(){
    cin.tie(0)->sync_with_stdio(0);
    long long n, t;
    cin >> n >> t;
    long long v[n+1];

    for(long long i=0; i<n; i++){
        cin >> v[i];
    }

    long long soma;
    switch(t){
        case 1:
            cout << 7 << "\n";
            break;

        case 2:
            if(v[0] > v[1]) cout << "Bigger\n";
            else if(v[0] == v[1]) cout << "Equal\n";
            else cout << "Smaller\n";
            break;

        case 3:
            for(int i=0; i<3; i++){
                for(int j=0; j<2; j++){
                    if(v[j] > v[j+1]){
                        swap(v[j], v[j+1]);
                    }
                }
            }
            cout << v[1] << "\n";
            break;
        case 4:
            soma = 0;
            for(long long i=0; i<n; i++){
                soma += v[i];
            }
            cout << soma << "\n";
            break;
        case 5:
            soma = 0;
            for(long long i=0; i<n; i++){
                if(v[i]%2==0) soma += v[i];
            }
            cout << soma << "\n";
            break;
        case 6:
            for(long long i=0; i<n; i++){
                v[i] = v[i] % 26;
                char c = 'a' + v[i];
                cout << c;
            }
            cout << "\n";
            break;
        case 7:
            int i = 0, cont = 0;
            while(true){
                if(v[i] >= n || v[i] < 0){
                    cout << "Out\n";
                    break;
                } else if(v[i] == n-1){
                    cout << "Done\n";
                    break;
                }
                i = v[i];
                cont++;
                if(cont > n){
                    cout << "Cyclic\n";
                    break;
                }
            }
    }
}