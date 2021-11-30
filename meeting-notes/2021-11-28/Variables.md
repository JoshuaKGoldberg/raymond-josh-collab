# Variables

A **variable** is a named reference in code to some value.
You can use them to store repeatedly use values, and also if you want to change that value over time.

For example, this prints `"Hello, world!\n"`:

```cpp
#include <iostream>

int main()
{
    std::string name = "world"
    std::cout << "Hello, " << name << "!\n";
}
```

## Memory

What actually happens when you ask for a variable is:

```cpp
#include <iostream>

int main()
{
    // 1. Give me a space in memory of a particular size
    //   That size is the exact amount allocated for that data type
    //     For example, ints are I think 32 bit by default?? something like that
    // 2. Place some value in the memory
    //   In other words, put the 1s and 0s in a way equal to the value I say
    //  .. .. .. .. .. 0 0 0 0 0 0 0 0
    //  .. .. .. .. .. ^
    //                 #abc120 (memory space number 900,000th - some giant number)
    int hello = 0;

    int hi; // reserves memory and doesn't do anything with it
    hi = 7;

    //  .. .. .. .. .. 0 0 0 0 0 0 1 1
    //  .. .. .. .. .. ^
    //                 #abc128 (memory space number 900,008th - some giant number)
    int other = 5;

    // Fun fact: little endian and big endian are low vs high address

    // There's heap and stack
    // Perhaps the same term differences, perhaps different:
    // One type of variable is memory that's managed for you (e.g. these ints)
    // Another is memory that you manage manually

    //  .. .. .. .. .. 0 0 0 0 1 1 0 0
    //  .. .. .. .. .. ^
    char firstLetter = 'c';

    //  .. .. .. .. .. 011000110110000101110010 < how it actually looks
    //                  with spaces for clarity (they're not real):
    //  .. .. .. .. .. 01100011 01100001 01110010
    //  .. .. .. .. .. ^
    std::string vehicle = "car";
}
```

## Pass & Copy By Value

Variables are passed & copied around by _value_: when you create a new one, it creates a new space in memory of the requested size.
That means that if you make a variable a copy of another variable like below, there's a second, new space in memory being used.

```cpp
//  .. .. .. .. .. .. .. .. .. 00000011
//  .. .. .. .. .. .. .. .. .. ^
// "Pass by value"
std::string value = 3;

//  .. .. .. .. .. .. .. .. .. 00000011
//  .. .. .. .. .. .. .. .. .. ^
// Same value, coincidentally, as the other variable, but a different space area in memory
// "Pass by value"
std::string otherVehicle2 = otherVehicle1;
```

I should note that I was wrong in our meeting talking about `std::string` being pass-by-value here.
I think they're actually using _pointers_.
We'll discover the intricacies together! 😂
