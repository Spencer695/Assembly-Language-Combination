#include <cstdint>
#include <iostream>
using namespace std;

/*
 * *** STUDENTS SHOULD WRITE CODE FOR THIS FUNCTION ***
 */
int16_t factorial(const uint16_t x) {
    uint16_t result = 1;
    for (uint16_t i = 2; i <= x; i++) {
        result *= i;
    }
    return result;
}

/*
 * *** STUDENTS SHOULD WRITE CODE FOR THIS FUNCTION ***
 */
int main() {
    int n, k;

    // get user input for n
    cout << "Enter n: ";
    cin >> n;

    // get user input for k
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

    // Calculate factorials
    uint16_t n_factorial = factorial(n);
    uint16_t k_factorial = factorial(k);
    uint16_t n_minus_k_factorial = factorial(n - k);
    
    // calculate C(n,k) = n! / (k! * (n-k)!)
    uint16_t c_n_k = n_factorial / (k_factorial * n_minus_k_factorial);

    // write out results
    cout << "result = " << c_n_k << endl;

    return 0;
}
