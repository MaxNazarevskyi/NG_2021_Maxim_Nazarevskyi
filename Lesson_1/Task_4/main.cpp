#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
    char *locale = setlocale(LC_ALL, "");
    int a,b,b1,c,D,x1,x2,sqD,x;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"c=";
cin>>c;
cout<<"\n";
b1=pow(b,2);
D=b1-4*a*c;
cout<<"������������ �����: "<<D<<"\n";
if(D>0)cout<< "\n��� �����";
if(D==0)cout<< "\n���� ������";
if(D<0)cout<< "\n������ ���";
cout<<"\n";
sqD=sqrt(D);
x1=(-b+sqD)/2*a;
x2=(-b-sqD)/2*a;
x=(-b)/2*a;
if(D>0)cout<<"������ ������: "<<x1<<"\n"<<"������ ������: "<<x2<<endl;
if(D==0)cout<<"������ ��������� :"<<x;

    return 0;
}
