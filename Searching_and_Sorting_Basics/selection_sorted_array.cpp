#include <iostream>
using namespace std;

int main ()
{
    const int size = 7;
    int arr[size] = {5,10,2,8,1,9,6}, min;

    cout << "Array before Selection Sorting: [";
    for (int i = 0; i < size; i ++)
    {
        cout << arr[i] << ",";
    }
    cout << "]" << endl;

    for (int i = 0; i <= size - 1; i ++)
    {
        min = i;
        for (int j = i + 1; j < size; j ++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            int temp; 
            temp = arr[i]; 
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    cout << "Array after Selection Sorting: [";
    for (int i = 0; i < size; i ++)
    {
        cout << arr[i] << ",";
    }
    cout << "]" << endl;
    return 0;
}
