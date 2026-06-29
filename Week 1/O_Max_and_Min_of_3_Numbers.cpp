//Retry This

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long A, B, C;
    if (cin >> A >> B >> C) {
        long long minimum = min({A, B, C});
        long long maximum = max({A, B, C});
        
        cout << "Min = " << minimum << "\n";
        cout << "Max = " << maximum << "\n";
    }
    return 0;
}
