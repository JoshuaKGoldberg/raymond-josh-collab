# Notes 2022-02-07

## Clarity Strategy: Avoid Ambiguous Names

You're already great at giving variables informative names like `capacity` and `index`.
You'll want to apply the same strategy for dummy characters.

For example, try not to give characters values like `'1'` or `'2'` because then it's hard to think about them compared to number values.
When working with arrays/vectors, I'd suggest using letters _in order_ to make them easier to keep track.

## Thinking Strategy: Substituting Numbers

When I'm having a hard time figuring out what numbers loops need to work with _(`+1`? `-1`? ?!)_, I like to substitute in small numbers to think about.
For example, looking at the two loops in the vector `insert` function:

- Let's say `index` is 3
- Let's say `size` is 6

Using those numbers, we know:

- The first `for` loop should copy 0 through 2, so `i = 0; i < index`
- The second `for` loop should copy 3 through 5, so `i = index; i < size`

## Thinking Strategy: Debugger Over Scrutiny

It's very hard to look at code you recently wrote and understand what it _actually_ does rather than what you _want_ it to do.
If you can't see the problem by staring at code and using the above "substituting numbers" strategy isn't helping either, I highly recommend using a debugger.

### Debugging Strategy: Writing It Down

It can be hard to debug tricky loops when

For example,

```cpp
for (int i = index; i < size; i++)
{
    data[i + 1] = data[i];
}
```

Writing down a visualization for each step might look something like:

```text
index=2
abcdef

i=0
abccef

i=1
abcccf

i=2
abcccc
```

## Debugging: Step Into vs Step Over

The only difference between these two buttons/commands is when the line of code about to be run includes a function call.

- **Step Into** dives _into_ the function call
- **Step Over** skips _over_ the function call

## Cheatsheets

Random bits of logic can be really tricky to get right in code.
Consider making a cheatsheet for yourself for things like:

- From 0 to a number
- From a number to larger number
- From a larger number to a smaller number
- From a number to 0
