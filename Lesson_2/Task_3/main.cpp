#include <iostream>
using namespace std;
int main()
{
    int Size;
    cout<<"Size : ";
    cin>>Size;
    for(int a=0;a<Size;a++)
    {
        for(int w=0;w<Size;w++)
        {
            if((a>=1 && a<=Size-2)&&(w>=1 && w<=Size-2))
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
