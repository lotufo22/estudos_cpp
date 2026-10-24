#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int linha, coluna;
    cin >> linha >> coluna;

    vector<vector<int>> numeros(linha, vector<int>(coluna));

    for(int i = 0 ; i < numeros.size(); i++){
        for(int j = 0; j < numeros[i].size(); j++){
            int n;
            cin >> n;
            numeros[i][j] = n;
        }
    }

    // sort(numeros.begin(), numeros.end());
    // sort(numeros.rbegin(), numeros.rend());

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << numeros[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}