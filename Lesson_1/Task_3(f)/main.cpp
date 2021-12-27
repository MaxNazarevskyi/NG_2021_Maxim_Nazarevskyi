#include <iostream>

using namespace std;

int main()
{
    int a =20;
    int b =50;
    a = b, b = a;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}
