class Vector<T>
{
    T[] items;
    int capacity;
    int size;

    // size is N
    // O(notation) for creating a new vector of size size (N)
    // O(1) because no loops or if statements... in theory.
    // In practice the operating system *might* zero out the
    // memory given to you in the new T[size]...
    // ...which would be of size N, and therefore make it O(N).
    Vector<T>(capacity)
    {
        this.items = new T[capacity]
        this.capacity = capacity;
        this.size = 0;
    }

    // size is N
    Vector::push_back(T item)
    {
        // IF there's space in the internal items array:
        //  - then we add the item to the next space
        // O notation is O(1) because it's one operation
        if (this.size < this.capacity)
        {
            this.items[this.size] = item;
        }
        // ELSE since there's no space in items left:
        //  - we create a new array of a bigger size,
        //    copying the original items the new array
        //    then add the the new item to the end of it
        // O notation is O(N)
        else
        {
            this.capacity *= 2;
            // This will create a new array of size capacity (this.size * 2),
            // and then also copy over everything from the original array.
            // That copy is N operations, so O(N)
            this.items = create_new_array_double_sized(this.items, this.size);
            this.size++;
        }
    }
}