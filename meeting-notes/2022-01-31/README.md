# Notes 2022-01-31

## Vector Inserts

Let's go over a few examples...

### Case: size is less than capacity

Array: `['a', ...]`
Size: 1
Capacity: 3

List of things to insert `'b'` at index `0`:
1. Shift over the current 0 by 1: so array looks like `[null, 'a', ...]`
2. Insert `'b'` at index 0: so array looks like `['b', 'a', ...]`
3. Increase size by on1

Array: `['a', 'b']`
Size: 2
Capacity: 2

### Case: size is equal to capacity

List of things to insert `'c'` at index `0`:
1. Increase capacity
    1. Multiply capacity by 2
    2. Make a new array of the new capacity
    3. Copy everything from the old array into the new array
2. Shift everything in the new array at the index `0` onward
3. Insert `'c'` at index 0: so array looks like `['c', 'a', 'b', ...]`
3. Increase size by on1
