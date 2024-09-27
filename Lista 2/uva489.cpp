#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    while(cin >> n){
        if(n == -1) return 0;
        cout << "Round " << n << "\n";
        int freq[26];
        string res, tent;
        cin >> res >> tent;
        memset(freq, 0, sizeof(freq));
        int total = 0;
        for(int i=0; i<res.size(); i++){
            if(freq[res[i]-'a'] == 0){
                freq[res[i]-'a']++;
                total++;
            }
        }

        int erros = 0, acertos = 0;
        for(int i=0; i<tent.size(); i++){
            if(freq[tent[i]-'a'] == 0){
                freq[tent[i]-'a'] = -1;
                erros++;
            }
            else if(freq[tent[i]-'a'] > 0){
                acertos++;
                freq[tent[i]-'a'] = -1;
            }
            if(acertos >= total || erros >= 7) break;
        }

        if (erros >= 7) cout << "You lose.\n";
        else if(acertos >= total) cout << "You win.\n";
        else cout << "You chickened out.\n";

    }
}