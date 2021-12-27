#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    char *locale = setlocale(LC_ALL, "");
    int weight;
    double gas;
    cout << "Weight spaceship:= ";
    cin >> weight;
    gas = ((weight/3)-2)*300;
    cout << gas <<" liters";
    return 0;
}
