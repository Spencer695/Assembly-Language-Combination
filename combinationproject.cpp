#include <cstdint>
#include <iostream>
using namespace std;

// Calculates the factorial of a given number
uint16_t factorial(const uint16_t x) {
    uint16_t result = 1;
    for (uint16_t i = 2; i <= x; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n, k;

    // Gets user input for n
    cout << "Enter n: ";
    cin >> n;

    // Gets user input for k
    cout << "Enter k: ";
    cin >> k;

    // Validate input: n > 0 and k > 0
    if (n <= 0 || k <= 0) {
        cout << "result = -1" << endl;
        return 0;
    }
    
    // Validate that k <= n for valid combinations
    if (k > n) {
        cout << "result = -1" << endl;
        return 0;
    }

    // Calculates factorials
    uint16_t n_factorial = factorial(n);
    uint16_t k_factorial = factorial(k);
    uint16_t n_minus_k_factorial = factorial(n - k);
    
    // calculate C(n,k) = n! / (k! * (n-k)!)
    uint16_t c_n_k = n_factorial / (k_factorial * n_minus_k_factorial);

    // Outputs results
    cout << "result = " << c_n_k << endl;

    return 0;
}
