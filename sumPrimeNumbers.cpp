// Fourth C++ Program
// Check if an integer, entered by the user, can be expressed as
// the sum of two prime numberrs of all possible combinations 
// with the use of functions.


/*
This program takes a positive integer from user and
checks whether that number can be expressed as the sum of two prime numbers.

If the number can be, the output shows the combination of the primes.

To perform this task, a user-defined function is created: `checkPrime()`
 */

#include <iostream>
using namespace std;

bool checkPrime(int n);

int main() {
    int n, i;
    bool flag = false;

    cout << "Enter a positive integer: ";
    cin >> n;

    for(i = 2; i <= n/2; ++i) {
        if (checkPrime(i)) {
            if (checkPrime(n - 1)) {
                cout << n << " = " << i << " + " << n-1 << endl;
                flag = true;
            }
        }
    }

    if (!flag) 
        cout << n << " can't be expressed as the sum of two prime numbers.";

    return 0;
}

// Check prime number
bool checkPrime(int n)
{
    int i;
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0  || n == 1) {
        isPrime = false;
    }
    else {
        for(i = 2; i <= n/2; ++i) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    
    return isPrime;
}


