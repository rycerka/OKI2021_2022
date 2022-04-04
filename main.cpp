#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char polecenie;
    while (true) {
        cin >> polecenie;
        if (polecenie == 'd') {
            cout << "DRUKUJ\n";
        } else if (polecenie == 'g') {
            cout << "GOTOWY\n";
        } else if (polecenie == 's') {
            cout << "STATYSTYKI\n";
        } else {
            cout << "BLAD\n";
        }
    }
    return 0;
}