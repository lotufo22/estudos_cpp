#include<bits/stdc++.h>

using namespace std;

struct Ponto{
    double x, y;

    bool operator<(const Ponto &p){
        if(x != p.x) return x < p.x;
        else return y < p.y;
    }
};

struct comparaSoma{
    bool operator()(const Ponto &a, const Ponto &b){
        return (a.x + a.y) < (b.x + b.y);
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Ponto a;
    a.x = 1.0;
    a.y = 2.0;

    cout << a.x << " " << a.y << endl;

    vector<Ponto> pontos(3);

    for(int i = 0; i < 3; i++){
        pontos[i].x = i;
        pontos[i].y = i+1;
    }

    sort(pontos.begin(), pontos.end());

    for(int i = 0; i < 3; i++){
        cout << pontos[i].x << " " << pontos[i].y << endl;
    }

    sort(pontos.begin(), pontos.end(), comparaSoma());

    for(int i = 0; i < 3; i++){
        cout << pontos[i].x << " " << pontos[i].y << endl;
    }

    return 0;
}