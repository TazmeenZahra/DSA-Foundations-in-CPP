#include <iostream>
using namespace std;

int main ()
{
    const int size = 10;
    int arr[size] = {9, 20, 40, 41, 67, 89, 10, 12, 13, 15};
    int targetValue = 89;
    int first, last, mid; 
    // these are indexes for searching in binary search

    cout << "Applying Bubble sort on the array: [";
    for (int i = 0; i < size - 1; i ++)
    {
        for (int j = 0; j < size - i - 1; j ++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i ++)
    {
        cout << arr[i] << ", ";
    }
    cout << "]" << endl;

    cout << "Applying Binary Search on the Sorted Array. " << endl;
    first = 0;
    last = size - 1;
    
    while (first <= last)
    {
        mid = (first + last)/2;

        if (arr[mid] == targetValue)
        {
            cout << "Target Value 89 Found at array index " << mid << endl;
            break;
        }
        else if (arr[mid] < targetValue)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    return 0;
}
