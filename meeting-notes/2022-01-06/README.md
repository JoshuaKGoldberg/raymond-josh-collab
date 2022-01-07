# Notes 2022-01-06

## Spotting Memory Leaks

In general, try to find every instance of the `new` keyword in your code.
For each `new`, there should be a corresponding `delete`.

Deleting old memory is done with the `delete` keyword:

> Recap: https://www.cplusplus.com/doc/tutorial/dynamic

## Valgrind

For detecting them automatically, I used to enjoy a tool called `valgrind`.

Note that this isn't a compiler, it's an analyzer.

- A compiler takes in source code and outputs a program
- This analyzer executes your program and looks at memory usage

To use G++ (a compiler) and valgrind:

1. Run `g++` on your souurce `.cpp` file to create an output program (executable, or exe)

   `g++ Project.cpp -o a.out`
   // ^^^^^^^^^^^ (or whatever the file name is)

2. Run that output program with valgrind

   `valgrind ./a.out`

> Tip: Windows stores paths like `C:/Users/abc/def/ghi` while WSL/Linux will see them as `/mnt/c/Users/abc/def/ghi`.

It'll also say to run with `--leak-check=full`.
`valgrind --leak-check=full ./a.out`.

### Interpreting Valgrind Complaints

I don't know how to configure Valgrind to point back to source code, but it does still give you reaally useful information!

* The operation such as `new []` that created the memory
* The call stack such as `main` -> `push_back`

Let's look at this one:

```
==4302== HEAP SUMMARY:
==4302==     in use at exit: 15 bytes in 2 blocks
==4302==   total heap usage: 4 allocs, 2 frees, 73,231 bytes allocated
==4302==
==4302== 5 bytes in 1 blocks are definitely lost in loss record 1 of 2
==4302==    at 0x483C583: operator new[](unsigned long) (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==4302==    by 0x1092B9: main (in /mnt/c/Users/Rjban/source/repos/Vector_Pushback/Vector_Pushback/a.out)
==4302==
==4302== 10 bytes in 1 blocks are definitely lost in loss record 2 of 2
==4302==    at 0x483C583: operator new[](unsigned long) (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==4302==    by 0x10921A: pushback(int, char*&, int, char) (in /mnt/c/Users/Rjban/source/repos/Vector_Pushback/Vector_Pushback/a.out)
==4302==    by 0x109343: main (in /mnt/c/Users/Rjban/source/repos/Vector_Pushback/Vector_Pushback/a.out)
==4302==
==4302== LEAK SUMMARY:
==4302==    definitely lost: 15 bytes in 2 blocks
==4302==    indirectly lost: 0 bytes in 0 blocks
==4302==      possibly lost: 0 bytes in 0 blocks
==4302==    still reachable: 0 bytes in 0 blocks
==4302==         suppressed: 0 bytes in 0 blocks
```

Looking at the second block's call stack:

```
operator new[](unsigned long)
pushback(int, char*&, int, char)
main
```

That tells you it's the `new[]` operation inside the `pushback` function, as called by the `main` function.
