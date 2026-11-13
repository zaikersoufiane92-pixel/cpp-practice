#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = 3, c = 4;

    a += b *= c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
