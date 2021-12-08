#include <iostream>
#include <vector> // ?

using namespace std;

int main()
{
    // Make a vector that stores ints
    Vector<int> my_ints(100);

    // Nine thousand and one times:
    for (int i = 0; i < 9001; i++)
    {
        // Add a new integer, i, to the end of my_ints
        my_ints.push_back(i);
    }

    // This would say the size of the vector
    cout << my_ints.size << "\n";

    Vector<string> my_strings(123);
}
