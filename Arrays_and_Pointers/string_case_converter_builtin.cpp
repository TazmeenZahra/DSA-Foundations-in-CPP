#include <iostream>
#include <cctype>
using namespace std;
void ChangeCase (char *crr, int size)
{
    for (int i = 0; i < size + 1; i ++)
    {
        if (islower(crr[i]))
        {
            crr[i] = toupper(crr[i]);
        }
        else if (isupper(crr[i]))
        {
            crr[i] = tolower(crr[i]);
        }
        else
        {
            cout << "The character you entered is not an alphabet. Please write an alphabet: ";
            cin >> crr[i];
        }
    }
}

int main ()
{
    int size;
    cout << "Enter size for array: "; cin >> size;

    char *arr = new char[size + 1];
    cout << "Enter characters in array: " << endl;

    for (int i = 0; i < size; i ++)
    {
        cin >> arr[i];
    }

    cout << "Previous array: " << endl;
    for (int k = 0; k < size + 1; k ++)
    {
        cout << arr[k];
        cout << endl;
    }

    ChangeCase (arr, size);

    cout << "Updated array: " << endl;
    for (int j = 0; j < size + 1; j ++)
    {
        cout << arr[j];
        cout << endl;
    }
    delete []arr;
    return 0;
}
