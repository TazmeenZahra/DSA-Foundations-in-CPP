#include <iostream>
using namespace std;

// (a) Find maximum element recursively
int findMax(int a[], int n) {
    if (n == 1)
        return a[0];              // Base case: only one element
    int maxRest = findMax(a, n - 1);  // Recursive call on first n-1 elements
    return (a[n - 1] > maxRest) ? a[n - 1] : maxRest;
}

// (b) Find minimum element recursively
int findMin(int a[], int n) {
    if (n == 1)
        return a[0];
    int minRest = findMin(a, n - 1);
    return (a[n - 1] < minRest) ? a[n - 1] : minRest;
}

// (c) Find sum of elements recursively
int findSum(int a[], int n) {
    if (n == 0)
        return 0;
    return a[n - 1] + findSum(a, n - 1);
}

// (d) Find product of elements recursively
int findProduct(int a[], int n) {
    if (n == 0)
        return 1;  // Product identity
    return a[n - 1] * findProduct(a, n - 1);
}

// (e) Find average of elements recursively
double findAverage(int a[], int n) {
    int sum = findSum(a, n);   // Use recursive sum function
    return (double)sum / n;
}

int main() {
    int a[10], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "\nMaximum element: " << findMax(a, n);
    cout << "\nMinimum element: " << findMin(a, n);
    cout << "\nSum of elements: " << findSum(a, n);
    cout << "\nProduct of elements: " << findProduct(a, n);
    cout << "\nAverage of elements: " << findAverage(a, n) << endl;

    return 0;
}
