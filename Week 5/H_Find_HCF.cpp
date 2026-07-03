// Revisit
#include <iostream>
using namespace std;

void hcf(int A, int B) {
    int highest_factor = 1;

    // Find the smaller number to limit loop boundaries
    int limit = (A < B) ? A : B; 

    // Run loop once up to the smaller number
    for (int i = 1; i <= limit; i++) {
        // Must divide BOTH A and B completely
        if (A % i == 0 && B % i == 0) {
            highest_factor = i; // Overwrite to store the largest factor found
        }
    }
    cout << highest_factor;
}

int main() {
    int A, B;
    cin >> A >> B;
    hcf(A, B);
    return 0;
}
