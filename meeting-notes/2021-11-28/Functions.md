# Functions

A **function** is a block of code logic that you can pass some values ("parameters") into, have it run with those values, and get some return value out of.

This function prints `"Hello, world!\n"` and returns `void` ("nothing"):

```cpp
void sayHello()
{
    std::cout << "Hello, world!\n";
}
```

You can call it any number of times you want.

## Main Function

The **`main`** function the code that gets run when someone starts your program.
It's a function that returns an int for a status code:

- `0`: everything is ok
- `1` or higher: there was an error

This function uses `sayHello` from before to say hello, then returns `0` for everything is ok:

```cpp
int main()
{
    sayHello();
    return 0;
}
```

Fun fact: if a `main` function doesn't explicitly return, C++ will add in a default, blank-ish return value based on the type it's meant to return.
The default for ints is `0`.
So if your `main` doesn't return, it defaults to returning `0`!

This is **not** necessarily true for other functions.
I think that depends on the compiler.
