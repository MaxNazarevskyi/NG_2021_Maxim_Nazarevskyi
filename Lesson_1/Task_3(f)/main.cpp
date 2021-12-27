#include <iostream>

using namespace std;

int main()
{
    int a =20;
    int b =50;
    b=a+b; //b=70
    a=b-a; //a=70-20=50
    b=b-a; //b=70-50=20
    cout << "a=" << a << endl;
    cout << "b=" << b;
    return 0;
}
