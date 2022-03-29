#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e6;
int buttnos[MAX_N + 6];

int main() {
    int n, m;
    int p;
    int max_new = 0;
    int max_old = 0; //max when pushed the n + 1 button
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> p;
        if (p != n+1) {
            if (buttnos[p] < max_old) {
                buttnos[p] = max_old + 1;
            } else {
                buttnos[p]++;
            }
            if (max_new < buttnos[p]) {
                max_new = buttnos[p];
            }
        } else {
            max_old = max_new;
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (buttnos[i] < max_old) {
            buttnos[i] = max_old;
        }
        cout << buttnos[i] << " ";
    }

    return 0;
}