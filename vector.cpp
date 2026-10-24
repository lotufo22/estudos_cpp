#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    vector<int> numeros;

    for(int i = 0; i < num; i++){
        int valor;
        cin >> valor;
        numeros.push_back(valor);
    }

    sort(numeros.begin(), numeros.end());

    for(int n : numeros) {
        cout << n << " ";
    }

    cout << endl;
    
    // sort(numeros.rbegin(), numeros.rend());

    int insercao;
    cin >> insercao;
    
    numeros.insert(numeros.begin() + 3, insercao);

    int remocao;
    cin >> remocao;

    numeros.erase(numeros.begin() + remocao);

    for(int n : numeros) {
        cout << n << " ";
    }

    cout << endl;

    cout << numeros.front() << " - " << numeros.back() << endl;

    if(numeros.empty()){
        cout << "lista vazia" << endl;
    }
    else cout << "lista cheia" << endl;
    return 0;
}