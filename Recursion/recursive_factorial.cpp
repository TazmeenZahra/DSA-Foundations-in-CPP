#include <iostream>
using namespace std;

int factorial (int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial (n - 1);
    }
}

int main ()
{
    cout << "Factorial of numbers from 10 to 1." << endl;

    for (int i = 10; i >= 1; i --)
    {
        cout << "Factorial of " << i << " is: " << factorial(i) << endl;
    }
    return 0;
}
