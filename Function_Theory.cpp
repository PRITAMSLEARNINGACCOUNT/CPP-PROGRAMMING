#include <iostream>
using namespace std;
int sum(int a, int b); //--->Function Prototype.
int sum(int, int);     // This Function Prototype is also acceptable.
// void g(void); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable
void goodmorning(); //--> Acceptable
int main()
{
    int a = 5, b = 5;
    cout << "The sum of two numbers already Given in this programme is " << sum(a, b /*These are Actual Parameters*/);
    goodmorning();

    return 0;
}
int sum(int a, int b /*These are Formal Parameters(Copy of actual Parameters)*/)
{

    return a + b;
}
void goodmorning()
{
    cout << endl
         << "Hello, Good Morning";
}