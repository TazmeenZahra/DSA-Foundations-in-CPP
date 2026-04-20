#include <iostream>
using namespace std;

// Recursive Fibonacci function
int fibRecursive(int n) {
    if (n == 0)
        return 0;  // base case
    else if (n == 1)
        return 1;  // base case
    else
        return fibRecursive(n - 1) + fibRecursive(n - 2);
}

int main() {
    cout << "fib(11) using recursion = " << fibRecursive(11) << endl;
    return 0;
}
