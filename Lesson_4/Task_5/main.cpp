#include <iostream>

using namespace std;

int main()
{
    cout << "Your massage: " << endl;
    char words [255] = "";
    cin.getline(words, 255);
    cout << "Filter massage: " << endl;
    for (int i = 0; i < 255; i++) {
        if (words[i] == 'f' && words[i+1] == 'u' &&
            words[i+2] == 'c' && words[i+3] == 'k'){
                words[i] = '*';
                words[i+1] = '*';
                words[i+2] = '*';
                words[i+3] = '*';
       }
       cout << words[i];
    }
    return 0;
}
