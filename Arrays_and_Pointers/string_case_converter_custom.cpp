#include <iostream>
using namespace std;
void ChangeCase (char *crr, int size)
{
    for (int i = 0; i < size ; i ++)
    {
        if (crr[i] >= 'A' && crr[i] <= 'Z')
        {
            crr[i] += 32; // change into lowercase
        }
        else if (crr[i] >= 'a' && crr[i] <= 'z')
        {
            crr[i] -= 32; // change into uppercase
        }
        else
        {
            cout << "The character you entered,' " << crr[i] << " 'is not an alphabet. Please write an alphabet: ";
            cin >> crr[i];
            i--; // recheck the character.
        }
    }
}

int main ()
{
    int size;
    cout << "Enter size for array: "; cin >> size;

    char *arr = new char[size];
    cout << "Enter characters in array: " << endl;

    for (int i = 0; i < size; i ++)
    {
        cin >> arr[i];
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
