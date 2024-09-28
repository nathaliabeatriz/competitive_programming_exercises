#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int stars = 0, rank = 25, vitCons = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='W'){
            vitCons++;
            stars++;
            if(vitCons >= 3 && rank >= 6) stars++;

            if(rank >= 21 && rank <= 25){
                if(stars > 2){
                    rank--;
                    stars -= 2;
                }
            } else if(rank >= 16 && rank <= 20){
                if(stars > 3){
                    rank--;
                    stars -= 3;
                }
            } else if(rank >= 11 && rank <= 15){
                if(stars > 4){
                    rank--;
                    stars -= 4;
                }
            } else if(rank >= 1 && rank <= 10){
                if(stars > 5){
                    rank--;
                    stars -= 5;
                }
            }

        } else{
            vitCons = 0;
            if(rank >= 1 && rank <= 20){
                if(stars == 0 && rank < 20){
                    rank++;
                    if(rank >= 21 && rank <= 25) stars = 1;   
                    else if(rank >= 16 && rank <= 20) stars = 2;
                    else if(rank >= 11 && rank <= 15) stars = 3;
                    else if(rank >= 1 && rank <= 10) stars = 4;
                } 
                else if(stars > 0) stars--;
            }
        }

        if(rank == 0){
            cout << "Legend\n";
            return 0;
        }
    }

    cout << rank << "\n";
    return 0;
}