#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e6;
int buttons[MAX_N + 6];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    int p;
    int max_new = 0;
    int max_old = 0; //max when the n + 1 button pushed 
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> p;
        if (p != n+1) {
            if (buttons[p] < max_old) {
                buttons[p] = max_old + 1;
            } else {
                buttons[p]++;
            }
            if (max_new < buttons[p]) {
                max_new = buttons[p];
            }
        } else {
            max_old = max_new;
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (buttons[i] < max_old) {
            buttons[i] = max_old;
        }
        cout << buttons[i] << " ";
    }

    return 0;
}