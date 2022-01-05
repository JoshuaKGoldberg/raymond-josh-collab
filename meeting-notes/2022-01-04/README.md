# Notes 2022-01-04

## Array Reversals

These can be tricky :)

I find it easiest to think of these "swap X members with Y members" as having two parts:

1. Figuring out which indices need to be swapped
2. Figuring out, for each index, what the swap should be

If there's ever a reversal then there's probably some kind of `array_size - i` going on.

In the case of this problem:

Input:

- ['a', 'b', 'c', 'd', 'e']
- ['z', 'y', 'x', 'w', 'v']
- 5

Output:

- ['a', *'v'*, 'c', *'x'*, 'e']
- ['z', 'y', *'d'*, 'w', *'b'*]

...that's:

- When `i` is `1`, the swapped index is `4`
- When `i` is `3`, the swapped index is `2`

...meaning the swap index is indeed directly the array size minus `i`. ✨