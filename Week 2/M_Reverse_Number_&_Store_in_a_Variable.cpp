// Revisit Solution

#include <iostream>

using namespace std;

int main() {
    long long n;
    if (!(cin >> n)) return 0;

    long long reversed_num = 0;

    // Handle the edge case for 0
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    // Extract digits and build the reversed number
    while (n > 0) {
        reversed_num = reversed_num * 10 + (n % 10);
        n /= 10;
    }

    cout << reversed_num << endl;
    return 0;
}
