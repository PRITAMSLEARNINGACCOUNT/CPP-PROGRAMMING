#include <iostream>
using namespace std;
typedef union Testing
{
    char a;
    int b;
    double c;
} Testing;
union Testing2
{
    char a;
    int b;
    double c;
};
/*************************************************************WE CAN NOT USE UNION AS STRUCTURE*********************************************************/
// In above Union we can see that we have made three different data-type.First one is charecter type,Second one is Integer type and third one is Double type.
/*That means The above Union we made is taking 13 bytes of memory But as we are using Union it will optimize the memory by taking only one Datatype.
That's why we have to take any one datatype under the Union varriable made in Main Function.
But we can also made more Union varriable in main Function for using different data type in one Union.
*/
// Unions are used in CPP Programming language to make a programme memory efficient.That's why we can only use one data type made in an Union in one varriable on main funtion
int main()
{
    Testing a;
    a.b = 4;
    cout << a.b << endl;
    // Here we Created One varriable with one datatype created in One Union.
    Testing b;
    b.b = 5;
    cout << b.b << endl;
    // Here we Created Another One varriable with one datatype created in The same Union.
    union Testing2 ab;
    ab.a = 'c';
    cout << ab.a << endl;
    // Here we Created One varriable with one datatype created in Another Union.

    return 0;
}