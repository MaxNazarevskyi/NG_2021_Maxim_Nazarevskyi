#include <iostream>

using namespace std;

int main()
{
    int a [10];
    for (int i = 0; i < 10; i++) {
            cout << "[" << i + 1 << "]: ";
            cin >> a[i];
    }
    cout << "\nMassive: ";
        for (int i = 0; i < 10; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    {
    int b = 0;
    cout << "Your number = ";
    cin >> b;
    cout << "Updated massive: ";
        for (int j = 0; j < 10; ++j) {
            cout << b + a[j] << " ";
        }
        return 0;
    }
  }


