# Vectors

Each vector contains three things:

* `int capacity`: how much space in total is available in the `data` array
* `T[] data`: a partially or completely filled array of contents
* `int size`: how much space is currently being used within `data` (`<= capacity`)

Every time you `push_back` (add something to the vector), `size` increased by `1`.
If adding to the vector would surpass `capcity` (if `size` was already `== capacity`), then it has to grow:

1. Increase `capacity` by some arbitrary amount
2. Create a new array of that new `capacity`
3. Copy everything from `data` into that new array
4. Set `data` to point to that new array

## Examples

```
capacity = 3
data = ['a', null, null]
size = 1

push_back('b')

capacity = 3
data = ['a', 'b', null]
size = 2

push_back('c')

capacity = 3
data = ['a', 'b', 'c']
size = 3

push_back('!')

capacity = 6
data = ['a', 'b', 'c', '!', null, null]
size = 4

push_back('e')

capacity = 6
data = ['a', 'b', 'c', '!', 'e', null]
size = 5
```

```cpp
// Concepts:
// Arrays
// Pointers
// Reference values
// Loops over arrays

void push_back( /* ... */ )
{
    // 
}

int main()
{
    // start off with:
    // capacity = 3
    // data = ['a', null, null]
    // size = 1
    // ...

    push_back(capacity, data, size, 'b');
    push_back(capacity, data, size, 'c');
    push_back(capacity, data, size, '!');
    push_back(capacity, data, size, 'e');

    // end up with:
    // capacity = 6
    // data = ['a', 'b', 'c', '!', 'e', null]
    // size = 5
}
```