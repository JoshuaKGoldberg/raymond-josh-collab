# Notes Raymond 12/2

## Incrementors

For loop before:

```cpp
for (int i = 0; i <= 101; i++)
{
    if (i >= 51 && i % 2 != 0)
    {
        cout << i << "\n";
    }
}
```

Two changes:

- Start `int i = 51`
- End iterations `i += 2`

```cpp
for (int i = 51; i <= 101; i += 2)
{
    cout << i << "\n";
}
```

Syntax constructs such as for loops are intentionally primitive (low-level) tools.
As a programmer you'll get used to using them in various different ways -- not just however you're used to or is most common.

## Direct variables

```cpp
int k = 0;

for (int j = 1; j < 16; j ++)
{
    k = i + j;
    cout << k;
}
```

Instead, you don't need to declare the `int k`:

```cpp
for (int j = 1; j < 16; j ++)
{
    int k = i + j;
    cout << k;
}
```
