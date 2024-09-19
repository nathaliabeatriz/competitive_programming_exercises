#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int cont = 0, cont2 = 0;
        stack<int>p;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '\\'){
                if(!p.empty()){
                    cont2++;
                    p.push(cont2);
                    cont2 = 0;
                } else{
                    p.push(0);
                }
            } else if(!p.empty()){
                if(s[i] == '_'){
                    cont2++;
                } 
                else if(s[i] == '/'){
                    cont2++;
                    cont += cont2;
                    if(p.top() > 0) cont2 = p.top() + cont2;
                    else cont2 = 0;
                    p.pop();
                }
            } 
        }

        cout << cont << "\n";
    }
}