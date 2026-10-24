#include<bits/stdc++.h>
using namespace std;

void contagem_regressiva(int n){
    if(n == 0) cout << "Fim!" << endl;
    else{
        cout << n << endl;
        contagem_regressiva(n-1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numero = 10;

    contagem_regressiva(numero);

    return 0;
}

