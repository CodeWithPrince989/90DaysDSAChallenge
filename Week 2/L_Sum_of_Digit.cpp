// Revisit Solution

#include <iostream>
using namespace std;

int main() {
    long long n;

    cout << "Enter Number: ";
    
    if (cin >> n) {
        long long sum = 0;

        // Handle case if N is initially 0
        if (n == 0) {
            cout << 0 << "\n";
            return 0;
        }

        while (n > 0) {
            sum += n % 10; // Extract the last digit
            n /= 10;       // Remove the last digit
        }

        cout << sum << "\n";
    }
    return 0;
}