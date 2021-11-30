# For Loops

A **for loop** is a block of code that can get run multiple times ("iterations") based on three portions.

For example, the following for loop:

1. First, initializes a variable `i` with an initial value of `0`
2. At the beginning of each loop iteration, stops if `i < 100` is false
3. At the end of each loop iteration, runs `++i`

```cpp
for (
    // 1. Do before the loop starts
    // (commonly: creates a new number variable)
    int i = 0;

    // 2. At the beginning of the loop, stop running its contents if this is false
    // (commonly: check a number variable)
    i < 100;

    // 3. At the end of the loop, do this
    // (commonly: change your number variable)
    ++i
)
{
    // ...
    cout << i < "\n";
}
```

That loop therefore will run 100 times: first when `i` is `0`, then `1`, then ... all the way to `99`.
Once `++i` at the end of an iteration makes `i` equal to `100`, the loop will know to stop at the next iteration.

## Section Variants

Fun fact, any of those sections can be blank.

```cpp
// Also ok, but... why would you want this? 🤷‍♂️
int i = 0;
for (; i < 100; ++i)
{}
```

...and you don't have to make the loop reasonable.
You can make it immediately not run the contents:

```cpp
// This would never print "NEVER\n"...
for (i = 0; i < -9001; ++i)
{
    cout << "NEVER\n";
}
```
