#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n, m, cont = 1;
    while(cin >> n >> m){
        if(n==0 && m==0) return 0;
        if(cont > 1) cout << "\n";
        char mat[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> mat[i][j];
            }
        }
        int res[n][m];
        memset(res, 0, sizeof(res));

        int dx[] = {1, 0, -1, 0, 1, -1, 1, -1};
        int dy[] = {0, 1, 0, -1, 1, -1, -1, 1};

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == '.'){
                    for(int x = 0; x<8; x++){
                        if(dx[x]+i < 0 || dx[x]+i >=n || dy[x]+j < 0 || dy[x]+j >=m) continue;
                        if(mat[dx[x]+i][dy[x]+j] == '*'){
                            res[i][j]++;
                        }
                    }
                }
            }
        }
        cout << "Field #" << cont << ":\n";
        cont++;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == '*') cout << "*";
                else cout << res[i][j];
            }
            cout << "\n";
        }
    }

}