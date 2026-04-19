#include <iostream>
using namespace std;
int main ()
{
    int size;
    cout << "Enter size of the array: "; cin >> size;

    int *arr = new int[size];
    cout << "Enter values in array: " << endl;
    for (int i = 0; i < size; i ++)
    {
        cin >> arr[i];
    }

    int value;
    cout << "Enter new integer value for comparisson: "; cin >> value;

    int search = 0;
    for (int j = 0; j < size; j ++)
    {
        if (arr[j] == value)
        {
            search++;
        }
    }

    cout << "Our Value has been in the array " << search << " times." << endl;

    delete []arr;
    return 0;
}
