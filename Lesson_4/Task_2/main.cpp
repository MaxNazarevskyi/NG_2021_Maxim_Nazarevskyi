#include <iostream>

using namespace std;

int main()
{
    bool same = true;
    char F_str[255] = "";
    char S_str[255] = "";
    cin.getline(F_str, 255);
    cin.get(S_str, 255);
    for (int i = 0; i < 255; i++) {
        if (F_str[i] != S_str[i]){
            same = false;
            break;
        }
    }
    if (same)
        cout << "First string and Second string are the same";
    else
        cout << "First string and Second string are NOT same";
    return 0;
}
