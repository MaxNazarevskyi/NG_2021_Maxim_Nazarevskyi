#include <iostream>
using namespace std;

int main()
{
    int n;
    int Sum=0;
    cout << "Enter n = ";
    cin >> n;
    while (n!=0)
    {
        Sum += n%10;
        n /= 10;
    }
    cout << "Sum = " << Sum << endl;
    return 0;
}
