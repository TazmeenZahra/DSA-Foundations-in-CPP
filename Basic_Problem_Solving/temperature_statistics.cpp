#include <iostream>
using namespace std;

int main ()
{
    float read_temp[24], *ptr, avg = 0;
    ptr = read_temp;

    cout << "Write temperature readings for every hour of day:" << endl;
    
    for (int i = 0; i < 24; i ++)
    {
        cin >> read_temp[i];
        avg += read_temp[i];
    }
    avg /= 24;
    cout << "Average temperature for day is: " << avg << endl;

    float max, min = *ptr;
    for (int i = 1; i < 24; i ++)
    {
        if (min > *(ptr + i))
        {
            min = *(ptr + i);
        }

        else if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }
    cout << "Maximum temperature: " << max << endl;
    cout << "Minimum temperature: " << min << endl;

    return 0;
}
