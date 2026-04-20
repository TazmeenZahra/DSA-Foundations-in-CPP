#include <iostream>
using namespace std;

// Function to perform Bubble Sort (Ascending Order)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform Selection Sort (Descending Order)
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        // swap
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

// Function to calculate and display statistics
void calculateStats(int arr[], int n) {
    int highest = arr[n - 1];   // after ascending sort
    int lowest = arr[0];

    // average
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double average = sum / (double)n;

    // difference between total of 3 highest and 3 lowest
    int top3 = arr[n - 1] + arr[n - 2] + arr[n - 3];
    int low3 = arr[0] + arr[1] + arr[2];
    int difference = top3 - low3;

    // number of students above average
    int countAbove = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > average)
            countAbove++;
    }

    // display results
    cout << "\n---- STATISTICS ----" << endl;
    cout << "Highest mark: " << highest << endl;
    cout << "Lowest mark: " << lowest << endl;
    cout << "Average mark: " << average << endl;
    cout << "Difference (sum of top 3 - sum of lowest 3): " << difference << endl;
    cout << "Students scoring above average: " << countAbove << endl;
}

int main() {
    const int SIZE = 10;
    int marks[SIZE];

    cout << "Enter marks of 10 students: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Copy original array for reuse
    int marksCopy[SIZE];
    for (int i = 0; i < SIZE; i++)
        marksCopy[i] = marks[i];

    // 1. Sort in ascending order (Bubble Sort)
    bubbleSort(marks, SIZE);
    cout << "\nMarks in Ascending Order (Bubble Sort): ";
    for (int i = 0; i < SIZE; i++)
        cout << marks[i] << " ";

    // Calculate and display statistics
    calculateStats(marks, SIZE);

    // 2. Sort in descending order (Selection Sort)
    selectionSort(marksCopy, SIZE);
    cout << "\nMarks in Descending Order (Selection Sort): ";
    for (int i = 0; i < SIZE; i++)
        cout << marksCopy[i] << " ";

    cout << endl;
    return 0;
}
