// Revisit

#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int zeros = 0;
    int ones = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) {
            zeros++;
        } else {
            ones++;
        }
    }

    // Print all the zeros first
    for (int i = 0; i < zeros; i++) {
        cout << 0 << " ";
    }

    // Print all the ones next
    for (int i = 0; i < ones; i++) {
        cout << 1 << " ";
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
