#include<bits/stdc++.h>
using namespace std;

int fatorial(int n){
    if(n == 0) return 1;
    else {
        // n! = n * (n-1)!
        int aux = fatorial(n - 1);
        int resultado = n * aux;

        return resultado;
    }
}

int fatorial2(int n){
    if(n == 0) return 1;
    else return n * fatorial(n-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r = fatorial2(3);

    cout << r << endl;

    return 0;
}

