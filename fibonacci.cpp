#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n <= 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;

    while(true) {
        cin >> x;

        if(x == -1) break;

        int result = fibonacci(x);

        cout << result << endl;
    }

    return 0;
}

