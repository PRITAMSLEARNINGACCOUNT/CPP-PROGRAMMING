#include <iostream>
using namespace std;
int main()
{
    char abcdef='P';
    bool hello = true;
    bool hello2 = false;
    float ab;
    long double h;
    double h1;
    long h3;
    long int a;
    int b;
    cout << "So the bool value returns " << hello<<"\n";
    cout << "So the Second bool value returns "<< hello2 << " The size of the Bool is " << sizeof(hello2)<<"\n";
    cout << "Give a bigger float number" << endl;
    cin >> h;
    cout << "So the Inputed Long Double number is " << h << " And the size of long Double=Bigger Floating Point Number is " << sizeof(h) << endl;
    cout << "Give a Normal floating Point number" << endl;
    cin >> ab;
    cout << "So the Inputed Normal Floating point number is " << ab << " And the size of Normal Floating Point number is " << sizeof(ab) << endl;
    cout << "Give a Medium floating point number" << endl;
    cin >> h1;
    cout << "So the Inputed Medium Floating point number is " << h1 << " And the size of Double=Medium Floating Point Number is " << sizeof(h1) << endl;
    cout << "Give a Long Integer Type number" << endl;
    cin >> h3;
    cout << "So the Inputed Long Integer Type number is " << h3 << " And the size of long Inter Type number(Long) is " << sizeof(h3) << endl;
    cout << "Give a Long Integer number" << endl;
    cin >> a;
    cout << "So the Inputed Long Integer number is " << a << " And the size of Long Integer(Long int) is " << sizeof(a)<<endl;
    cout << "Give an Integer number" << endl;
    cin >> b;
    cout << "So the Inputed Integer number is " << b << " And the size of Integer(int) is " << sizeof(b)<<endl;
    cout<<"So the charecter given in this programme is "<<abcdef<<" And the size of a charecter in c++ Programming Language is "<<sizeof(abcdef)<<endl;
    cout<<"Give a charecter\n";
    char abcd;
    cin>>abcd;
    cout<<"So the charecter given by the user is "<<abcd<<endl;



    return 0;
}