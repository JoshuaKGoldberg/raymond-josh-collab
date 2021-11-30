# If and Else

## If

An **if statement** is a condition along with a block of code, where the block only gets run if the condition is true.

For example, this code would print `"Yes!"` but not `"No..."`:

```cpp
if (true)
{
    cout << "Yes!\n";
}

if (false)
{
    cout << "No...\n";
}
```

You can also do math operations in those conditions:

```cpp
if (2 + 2 == 4)
{
    cout << "Yes!\n";
}

if (1 + 2 < 0)
{
    cout << "No...\n";
}
```

Fun fact, you can omit the `{` and `}` if you really want:

```cpp
if (true) cout << "Yes!\n";
if (1 + 2 < 0) cout << "No...\n";
```

...but I recommend rarely doing that if ever.
It's easy to accidentally leave them out and not realize some line of code isn't inside the if body when you thought it was.

## Else

- An **else statement** is a block of code that only gets run if a preceding `if` statement's block did not.

Here, this would print `"Apple\n"` and `"Dragonfruit\n"` only:

```cpp
if (2 + 2 == 4)
{
    cout << "Apple\n";
}
else
{
    cout << "Banana\n";
}

if (1 + 2 < 0)
{
    cout << "Cherry\n";
}
else
{
    cout << "Dragonfruit\n";
}
```

## Else If

Else statements can also omit their `{` and `}`.
And you can have an `if` statement inside of an `else`.

Which means, these two blocks work the same:

```cpp
if (i % 3 == 0)
{
    cout << "fizz\n";
}
else
{
    if (i % 5 == 0)
    {
        cout << "buzz\n";
    }
}
```

```cpp
if (i % 3 == 0)
{
    cout << "fizz\n";
}
else if (i % 5 == 0)
{
    cout << "buzz\n";
}
```
