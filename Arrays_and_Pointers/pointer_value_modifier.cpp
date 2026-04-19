#include <iostream>
using namespace std;
int fun (int a, int b)
{
    a = a + 1;
    b = b + 1;
    cout << "Updated Value of Pointers: " << a << " , " << b ;
    return (a, b);
}

int main ()
{
    int *ptr1 = new int(10);
    int *ptr2 = new int(20);
    cout << "Original Values of Pinters: " << *ptr1 << " , " << *ptr2 << endl;
    fun(*ptr1, *ptr2);

    delete ptr1, ptr2;
    return 0;
}
