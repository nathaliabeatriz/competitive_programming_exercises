#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, b, h, w;
    while(cin >> n >> b >> h >> w){
        vector<int> precos;
        for(int i=0; i<h; i++){
            int p;
            cin >> p;
            bool r = false;
            for(int j=0; j<w; j++){
                int aux;
                cin >> aux;
                if(aux >= n){
                    r = true;
                }
            }
            if(r == true){
                precos.push_back(p);
            }
        }
        if(precos.size() > 0){
            sort(precos.begin(), precos.end());
            int resp = precos[0] * n;
            if(resp > b) cout << "stay home\n";
            else cout << resp << "\n";
            
        } else{
            cout << "stay home\n";
        }
        
    }

    return 0;
}