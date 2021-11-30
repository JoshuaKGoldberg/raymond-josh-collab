# Syntax Sugar

**Syntax Sugar** is the term for when you can use a "shortcut" piece of syntax that makes your code look nicer but doesn't change how it works.

Example: `i = i + 1` can be sweetened to `i += 1` or to `++i`

Technically, `using namespace std` is not itself syntax sugar (it does change some things in how your code compiles), but I like to think of it as sugar...

```cpp
#include <iostream>

// Syntax Sugar: it's when the code does exactly the same thing, but looks nicer ("sweeter" syntax)
// (I don't want to have to manually type out `std::`)
using namespace std;

int main()
{
    cout << "hello world\n";
}
```
