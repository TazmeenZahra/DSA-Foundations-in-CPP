#include <iostream>
using namespace std;

class Temperature
{
    int temp;

    public:
    Temperature ()
    {   temp = 15;  }

    void mutateWarm ()
    {   temp += 5;  }

    void mutateCool ()
    {   temp -= 5;  }

    int accessTemp ()
    {   return temp;  }
};

int main ()
{
    Temperature Xx;
    cout << "Temperature set by default: " << Xx.accessTemp () << endl;
    Xx.mutateWarm ();
    cout << "Temperaure Warmer Method: " << Xx.accessTemp () << endl;
    Xx.mutateCool ();
    cout << "Temperature Cooler Method: " << Xx.accessTemp () << endl;
    return 0;
}
