#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<double, double> ponto;
    ponto.first = 1.0;
    ponto.second = 2.0;

    cout << ponto.first << " " << ponto.second << endl;

    // Ou

    vector<pair<double, double>> pontos(3);

    int quantidade = 3;

    for(int i = 0; i < quantidade; i++){
        pontos[i].first = i;
        pontos[i].second = i+1;
    }

    for(int i = 0; i < quantidade; i++){
        cout << pontos[i].first << " " << pontos[i].second << endl;
    }
    
    return 0;
}

