# Libraries and Namespaces

## Libraries

A **library** is a collection of code that you can opt into including into your program.

For example, **i**nput & **o**utput **stream**s in C++ are available in a library called `iostream`.
You can tell the compiler that you want to use them in a file by including `#include <iostream>` at the top of a file.

```cpp
#include <iostream>
```

## Namespaces

A **namespace** is a global place for your code and/or libraries to put related things.

For example, `iostream` puts a bunch of things such as functions available under the `std` ("standard") namespace.
That includes `cout` (**c**haracter **out**put)!

```cpp
int main()
{
    std::cout << "hello world\n";
}
```
