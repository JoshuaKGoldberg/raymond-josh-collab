# Notes 2021-12-28

## Swapping

There's a kind of beautiful symmetry:

```
temp = val_a;
val_a = val_b;
val_b = temp;
```

It almost looks like diagonal lines:

```
X   /
  /
/   /
  /
/   X
```

## Stack Corruption Errors

We saw this error message:

```
Stack around around the variable 'MyArray' was corrupted.
```

We saw tha it's from doing something like `my_array[5]` when the program only had access to indices `0-4`.
In other words, it tried to _corrupt_ memory: write to outside of its control.

## Watch

In the debugger, you can use the Watch view to inspect the members of your code.
For example, to print out everything in an array, you could add `my_array[0]`, `my_array[1]`, etc.
