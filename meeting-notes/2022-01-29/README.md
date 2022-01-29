# Notes 2022-01-29

## Psuedocode First

When you're not sure how to code out a solution, it can be helpful to start by taking notes on the rough steps you'll need to take.
That lets you work through and understand the problem without getting mired in syntax.

For example, there were three problems in `push_back` to be solved:

1. Detecting whether the capacity needs to be expanded
2. If so, expanding the capacity
3. Adding the new entry to the array

Suggestion: take the time to jot down pseudocode as comments, then work through and replace comments as you implement.

## Precise Code

It's best to have code read like the logic you'd describe it with.
Code that does more than what you need it do can be more complex and therefore harder to work with.

For example, in `push_back`:

```cpp
if (capacity <= size)
```

Capacity will never be less than size, so that line is a little misleading.
Better:

```cpp
if (capacity == size)
```

We also worked on trimming down the number of lines of code.
Duplicating logic unnecessarily is more complex too.

For example, your `push_back` was duplicating capacity twice:

```cpp
char* new_data = new char[2 * capacity];
// ...
capacity = 2 * capacity;
```

...but now is not:

```cpp
capacity = 2 * capacity;
char* new_data = new char[capacity];
// ...
```

## Pomodoro Technique

https://en.wikipedia.org/wiki/Pomodoro_Technique

Think of taking a step back if you’re still stuck after, say, two Pomodoro cycles (so about an hour).

Definitely recommend always taking the time to write pseudocode if you think it would be helpful :).
It's an important skill that you _will_ need!

## Positive Feedback

You’re grasping the minutia a lot faster now.
Great!

Example: when you were starting the else statement in pushforward you immediately saw that the `data[0] = ...` logic needs to run no matter what.
Working on those fundamentals is going to help tremendously with all sorts of coding -- and you mentioned already has!
