#include <iostream>
using namespace std;

int main ()
{
    int *cs_arr = new int[5];
    int *ai_arr = new int[6];
    int *cy_arr = new int[4];

    cout << "Input grades for CS students: " << endl;
    for (int i = 0; i < 5; i ++)
    {
        cin >> cs_arr[i];
    }

    cout << "Input grades for AI students: " << endl;
    for (int i = 0; i < 5; i ++)
    {
        cin >> ai_arr[i];
    }

    cout << "Input grades for CY students: " << endl;
    for (int i = 0; i < 5; i ++)
    {
        cin >> cy_arr[i];
    }
}
