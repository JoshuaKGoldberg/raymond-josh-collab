# Meeting Notes 2022-02-20

This is the style of code you've written so far:

```cpp
void insert(char* &data, int &size, int &capacity, char insertion, int index)
{
    if (size === capacity)
    {
        capacity = capacity * 2;
        // ...
    }
    else
    {
        // ...
    }

    size = size + 1;
}

void main()
{
    int size = 0;
    int capacity = 2;
    char* data = // ...

    insert(data, size, capacity, 'a', 0);
    insert(data, size, capacity, 'c', 12);
}
```

An OOP / class-based approach might be to create a `CharVector` class.

```cpp
class CharVector
{
public:

    // Constructor overloads!
    CharVector() : CharVector(0, 2) {}
    CharVector(int size) : CharVector(size, size) {}

    // Initializes a new instance
    CharVector(int size, int capacity)
    {
        // Not this.size, because this is a pointer.
        // To access a member of a pointer, you use ->
        this->size = size;
        this->capacity = capacity;
        this->data = new char[capacity];
    }

    // Function overloads!

    insert(char insertion)
    {
        this->insert(insertion, 0);
    }

    insert(char insertion, int index)
    {
        if (this->size === this->capacity)
        {
            this->capacity = this->capacity * 2;
            // ...
        }
        else
        {
            // ...
        }

        this->size = this->size + 1;
    }

private:
    int size;
    int capacity;
    char* data;
}

void main()
{
    // size, capacity, data: all exist in this one instance
    CharVector my_vector();

    my_vector.insert(data, size, capacity, 'a', 0);
    my_vector.insert(data, size, capacity, 'c', 12);

    CharVector my_initially_big_vector(20, 25);
}
```

In that `CharVector` class, put all the functions you've written out so far.
You'll be able to mostly copy & paste & tweak them.
