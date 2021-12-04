// clear; g++ arrays.cpp; ./a.out

// clear
// g++ arrays.cpp
// ./a.out

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Arrays are fixed *size*
    // Pre-allocated to be this particular size
    //                 V          V       V
    string names[] = { "Raymond", "Josh", "Mike" };

    // ...but the contents can be changed
    names[1] = "Jerry";

    for (int i = 0; i < 3; i++)
    {
        cout << names[i] << "\n";
    }
    // cout << name1 << "\n";
    // cout << name2 << "\n";
    // cout << name3 << "\n";

    int size = 4;
    int evenNumbersGreaterThan10[size];
    // int evenNumbersGreaterThan10[4]; // or this

    for (int i = 0; i < size; i ++)
    {
        evenNumbersGreaterThan10[i] = 10 + (i * 2);
    }
    
    for (int i = 0; i < size; i ++)
    {
        cout << evenNumbersGreaterThan10[i] << "\n";
    }
}
