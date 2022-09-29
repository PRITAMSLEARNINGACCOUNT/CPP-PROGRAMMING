#include <iostream>
using namespace std;
int a=45;//Global Varriable
int main()
{
    int a;//Local varriable
    cout << "Enter an Integer\n";
    cin >> a;
    cout << "The integer given by the user is " << a << endl;
    cout<<"This is happening because the local varriable is overwriting the global varriable";
    return 0;
}